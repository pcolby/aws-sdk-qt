// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETXSSMATCHSETREQUEST_P_H
#define QTAWS_GETXSSMATCHSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "getxssmatchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class GetXssMatchSetRequest;

class GetXssMatchSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    GetXssMatchSetRequestPrivate(const WafRegionalRequest::Action action,
                                   GetXssMatchSetRequest * const q);
    GetXssMatchSetRequestPrivate(const GetXssMatchSetRequestPrivate &other,
                                   GetXssMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetXssMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
