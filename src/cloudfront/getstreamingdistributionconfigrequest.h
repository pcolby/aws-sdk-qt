// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMINGDISTRIBUTIONCONFIGREQUEST_H
#define QTAWS_GETSTREAMINGDISTRIBUTIONCONFIGREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetStreamingDistributionConfigRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetStreamingDistributionConfigRequest : public CloudFrontRequest {

public:
    GetStreamingDistributionConfigRequest(const GetStreamingDistributionConfigRequest &other);
    GetStreamingDistributionConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStreamingDistributionConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
