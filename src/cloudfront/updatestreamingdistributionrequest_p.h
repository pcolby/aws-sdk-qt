// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTREAMINGDISTRIBUTIONREQUEST_P_H
#define QTAWS_UPDATESTREAMINGDISTRIBUTIONREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "updatestreamingdistributionrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateStreamingDistributionRequest;

class UpdateStreamingDistributionRequestPrivate : public CloudFrontRequestPrivate {

public:
    UpdateStreamingDistributionRequestPrivate(const CloudFrontRequest::Action action,
                                   UpdateStreamingDistributionRequest * const q);
    UpdateStreamingDistributionRequestPrivate(const UpdateStreamingDistributionRequestPrivate &other,
                                   UpdateStreamingDistributionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateStreamingDistributionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
