// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGEXMATCHSETREQUEST_P_H
#define QTAWS_GETREGEXMATCHSETREQUEST_P_H

#include "wafrequest_p.h"
#include "getregexmatchsetrequest.h"

namespace QtAws {
namespace Waf {

class GetRegexMatchSetRequest;

class GetRegexMatchSetRequestPrivate : public WafRequestPrivate {

public:
    GetRegexMatchSetRequestPrivate(const WafRequest::Action action,
                                   GetRegexMatchSetRequest * const q);
    GetRegexMatchSetRequestPrivate(const GetRegexMatchSetRequestPrivate &other,
                                   GetRegexMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRegexMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
