// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWEBACLREQUEST_P_H
#define QTAWS_GETWEBACLREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "getwebaclrequest.h"

namespace QtAws {
namespace WafRegional {

class GetWebACLRequest;

class GetWebACLRequestPrivate : public WafRegionalRequestPrivate {

public:
    GetWebACLRequestPrivate(const WafRegionalRequest::Action action,
                                   GetWebACLRequest * const q);
    GetWebACLRequestPrivate(const GetWebACLRequestPrivate &other,
                                   GetWebACLRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWebACLRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
