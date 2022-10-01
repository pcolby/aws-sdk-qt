// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLEDREQUESTSREQUEST_P_H
#define QTAWS_GETSAMPLEDREQUESTSREQUEST_P_H

#include "wafrequest_p.h"
#include "getsampledrequestsrequest.h"

namespace QtAws {
namespace Waf {

class GetSampledRequestsRequest;

class GetSampledRequestsRequestPrivate : public WafRequestPrivate {

public:
    GetSampledRequestsRequestPrivate(const WafRequest::Action action,
                                   GetSampledRequestsRequest * const q);
    GetSampledRequestsRequestPrivate(const GetSampledRequestsRequestPrivate &other,
                                   GetSampledRequestsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSampledRequestsRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
