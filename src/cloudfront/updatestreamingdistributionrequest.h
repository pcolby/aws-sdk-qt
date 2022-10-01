// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTREAMINGDISTRIBUTIONREQUEST_H
#define QTAWS_UPDATESTREAMINGDISTRIBUTIONREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateStreamingDistributionRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT UpdateStreamingDistributionRequest : public CloudFrontRequest {

public:
    UpdateStreamingDistributionRequest(const UpdateStreamingDistributionRequest &other);
    UpdateStreamingDistributionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStreamingDistributionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
