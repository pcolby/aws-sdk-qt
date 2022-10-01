// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMINGDISTRIBUTIONREQUEST_P_H
#define QTAWS_GETSTREAMINGDISTRIBUTIONREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getstreamingdistributionrequest.h"

namespace QtAws {
namespace CloudFront {

class GetStreamingDistributionRequest;

class GetStreamingDistributionRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetStreamingDistributionRequestPrivate(const CloudFrontRequest::Action action,
                                   GetStreamingDistributionRequest * const q);
    GetStreamingDistributionRequestPrivate(const GetStreamingDistributionRequestPrivate &other,
                                   GetStreamingDistributionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStreamingDistributionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
