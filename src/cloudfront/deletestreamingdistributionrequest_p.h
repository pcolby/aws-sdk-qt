// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMINGDISTRIBUTIONREQUEST_P_H
#define QTAWS_DELETESTREAMINGDISTRIBUTIONREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "deletestreamingdistributionrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteStreamingDistributionRequest;

class DeleteStreamingDistributionRequestPrivate : public CloudFrontRequestPrivate {

public:
    DeleteStreamingDistributionRequestPrivate(const CloudFrontRequest::Action action,
                                   DeleteStreamingDistributionRequest * const q);
    DeleteStreamingDistributionRequestPrivate(const DeleteStreamingDistributionRequestPrivate &other,
                                   DeleteStreamingDistributionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStreamingDistributionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
