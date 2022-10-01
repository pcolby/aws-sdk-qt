// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGEXMATCHSETREQUEST_P_H
#define QTAWS_GETREGEXMATCHSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "getregexmatchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class GetRegexMatchSetRequest;

class GetRegexMatchSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    GetRegexMatchSetRequestPrivate(const WafRegionalRequest::Action action,
                                   GetRegexMatchSetRequest * const q);
    GetRegexMatchSetRequestPrivate(const GetRegexMatchSetRequestPrivate &other,
                                   GetRegexMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRegexMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
