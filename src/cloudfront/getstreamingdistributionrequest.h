// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMINGDISTRIBUTIONREQUEST_H
#define QTAWS_GETSTREAMINGDISTRIBUTIONREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetStreamingDistributionRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetStreamingDistributionRequest : public CloudFrontRequest {

public:
    GetStreamingDistributionRequest(const GetStreamingDistributionRequest &other);
    GetStreamingDistributionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStreamingDistributionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
