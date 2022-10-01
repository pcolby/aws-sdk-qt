// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONREQUEST_P_H
#define QTAWS_GETDISTRIBUTIONREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getdistributionrequest.h"

namespace QtAws {
namespace CloudFront {

class GetDistributionRequest;

class GetDistributionRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetDistributionRequestPrivate(const CloudFrontRequest::Action action,
                                   GetDistributionRequest * const q);
    GetDistributionRequestPrivate(const GetDistributionRequestPrivate &other,
                                   GetDistributionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDistributionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
