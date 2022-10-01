// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWEBACLFORRESOURCEREQUEST_P_H
#define QTAWS_GETWEBACLFORRESOURCEREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "getwebaclforresourcerequest.h"

namespace QtAws {
namespace WafRegional {

class GetWebACLForResourceRequest;

class GetWebACLForResourceRequestPrivate : public WafRegionalRequestPrivate {

public:
    GetWebACLForResourceRequestPrivate(const WafRegionalRequest::Action action,
                                   GetWebACLForResourceRequest * const q);
    GetWebACLForResourceRequestPrivate(const GetWebACLForResourceRequestPrivate &other,
                                   GetWebACLForResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWebACLForResourceRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
