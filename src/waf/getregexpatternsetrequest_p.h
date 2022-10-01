// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGEXPATTERNSETREQUEST_P_H
#define QTAWS_GETREGEXPATTERNSETREQUEST_P_H

#include "wafrequest_p.h"
#include "getregexpatternsetrequest.h"

namespace QtAws {
namespace Waf {

class GetRegexPatternSetRequest;

class GetRegexPatternSetRequestPrivate : public WafRequestPrivate {

public:
    GetRegexPatternSetRequestPrivate(const WafRequest::Action action,
                                   GetRegexPatternSetRequest * const q);
    GetRegexPatternSetRequestPrivate(const GetRegexPatternSetRequestPrivate &other,
                                   GetRegexPatternSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRegexPatternSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
