// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGEXPATTERNSETREQUEST_P_H
#define QTAWS_GETREGEXPATTERNSETREQUEST_P_H

#include "wafv2request_p.h"
#include "getregexpatternsetrequest.h"

namespace QtAws {
namespace Wafv2 {

class GetRegexPatternSetRequest;

class GetRegexPatternSetRequestPrivate : public Wafv2RequestPrivate {

public:
    GetRegexPatternSetRequestPrivate(const Wafv2Request::Action action,
                                   GetRegexPatternSetRequest * const q);
    GetRegexPatternSetRequestPrivate(const GetRegexPatternSetRequestPrivate &other,
                                   GetRegexPatternSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRegexPatternSetRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
