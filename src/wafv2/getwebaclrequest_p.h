// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWEBACLREQUEST_P_H
#define QTAWS_GETWEBACLREQUEST_P_H

#include "wafv2request_p.h"
#include "getwebaclrequest.h"

namespace QtAws {
namespace Wafv2 {

class GetWebACLRequest;

class GetWebACLRequestPrivate : public Wafv2RequestPrivate {

public:
    GetWebACLRequestPrivate(const Wafv2Request::Action action,
                                   GetWebACLRequest * const q);
    GetWebACLRequestPrivate(const GetWebACLRequestPrivate &other,
                                   GetWebACLRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWebACLRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
