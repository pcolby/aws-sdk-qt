// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMINGDISTRIBUTIONREQUEST_P_H
#define QTAWS_CREATESTREAMINGDISTRIBUTIONREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "createstreamingdistributionrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateStreamingDistributionRequest;

class CreateStreamingDistributionRequestPrivate : public CloudFrontRequestPrivate {

public:
    CreateStreamingDistributionRequestPrivate(const CloudFrontRequest::Action action,
                                   CreateStreamingDistributionRequest * const q);
    CreateStreamingDistributionRequestPrivate(const CreateStreamingDistributionRequestPrivate &other,
                                   CreateStreamingDistributionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStreamingDistributionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
