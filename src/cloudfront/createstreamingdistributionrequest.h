// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMINGDISTRIBUTIONREQUEST_H
#define QTAWS_CREATESTREAMINGDISTRIBUTIONREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateStreamingDistributionRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT CreateStreamingDistributionRequest : public CloudFrontRequest {

public:
    CreateStreamingDistributionRequest(const CreateStreamingDistributionRequest &other);
    CreateStreamingDistributionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStreamingDistributionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
