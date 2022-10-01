// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONCONFIGREQUEST_H
#define QTAWS_GETDISTRIBUTIONCONFIGREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetDistributionConfigRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetDistributionConfigRequest : public CloudFrontRequest {

public:
    GetDistributionConfigRequest(const GetDistributionConfigRequest &other);
    GetDistributionConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDistributionConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
