// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMINGDISTRIBUTIONWITHTAGSREQUEST_P_H
#define QTAWS_CREATESTREAMINGDISTRIBUTIONWITHTAGSREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "createstreamingdistributionwithtagsrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateStreamingDistributionWithTagsRequest;

class CreateStreamingDistributionWithTagsRequestPrivate : public CloudFrontRequestPrivate {

public:
    CreateStreamingDistributionWithTagsRequestPrivate(const CloudFrontRequest::Action action,
                                   CreateStreamingDistributionWithTagsRequest * const q);
    CreateStreamingDistributionWithTagsRequestPrivate(const CreateStreamingDistributionWithTagsRequestPrivate &other,
                                   CreateStreamingDistributionWithTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStreamingDistributionWithTagsRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
