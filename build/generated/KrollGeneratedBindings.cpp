/* C++ code produced by gperf version 3.0.3 */
/* Command-line: gperf -L C++ -E -t /private/var/folders/17/h190jfn55w78k880vbn4lct80000gp/T/sivakumar/countly-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/17/h190jfn55w78k880vbn4lct80000gp/T/sivakumar/countly-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "ly.count.CountlyModule.h"


#line 13 "/private/var/folders/17/h190jfn55w78k880vbn4lct80000gp/T/sivakumar/countly-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 1, duplicates = 0 */

class CountlyBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
CountlyBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
CountlyBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 1,
      MIN_WORD_LENGTH = 22,
      MAX_WORD_LENGTH = 22,
      MIN_HASH_VALUE = 22,
      MAX_HASH_VALUE = 22
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 15 "/private/var/folders/17/h190jfn55w78k880vbn4lct80000gp/T/sivakumar/countly-generated/KrollGeneratedBindings.gperf"
      {"ly.count.CountlyModule", ::ly::count::CountlyModule::bindProxy, ::ly::count::CountlyModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 16 "/private/var/folders/17/h190jfn55w78k880vbn4lct80000gp/T/sivakumar/countly-generated/KrollGeneratedBindings.gperf"

