// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMINGDISTRIBUTIONCONFIGREQUEST_P_H
#define QTAWS_GETSTREAMINGDISTRIBUTIONCONFIGREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getstreamingdistributionconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetStreamingDistributionConfigRequest;

class GetStreamingDistributionConfigRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetStreamingDistributionConfigRequestPrivate(const CloudFrontRequest::Action action,
                                   GetStreamingDistributionConfigRequest * const q);
    GetStreamingDistributionConfigRequestPrivate(const GetStreamingDistributionConfigRequestPrivate &other,
                                   GetStreamingDistributionConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStreamingDistributionConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
