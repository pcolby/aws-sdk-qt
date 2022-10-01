// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLEDREQUESTSREQUEST_P_H
#define QTAWS_GETSAMPLEDREQUESTSREQUEST_P_H

#include "wafv2request_p.h"
#include "getsampledrequestsrequest.h"

namespace QtAws {
namespace Wafv2 {

class GetSampledRequestsRequest;

class GetSampledRequestsRequestPrivate : public Wafv2RequestPrivate {

public:
    GetSampledRequestsRequestPrivate(const Wafv2Request::Action action,
                                   GetSampledRequestsRequest * const q);
    GetSampledRequestsRequestPrivate(const GetSampledRequestsRequestPrivate &other,
                                   GetSampledRequestsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSampledRequestsRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
