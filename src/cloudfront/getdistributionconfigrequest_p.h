// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONCONFIGREQUEST_P_H
#define QTAWS_GETDISTRIBUTIONCONFIGREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getdistributionconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetDistributionConfigRequest;

class GetDistributionConfigRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetDistributionConfigRequestPrivate(const CloudFrontRequest::Action action,
                                   GetDistributionConfigRequest * const q);
    GetDistributionConfigRequestPrivate(const GetDistributionConfigRequestPrivate &other,
                                   GetDistributionConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDistributionConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
