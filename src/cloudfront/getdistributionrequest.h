// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONREQUEST_H
#define QTAWS_GETDISTRIBUTIONREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetDistributionRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetDistributionRequest : public CloudFrontRequest {

public:
    GetDistributionRequest(const GetDistributionRequest &other);
    GetDistributionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDistributionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
