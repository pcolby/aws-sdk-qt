// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDISTRIBUTIONREQUEST_H
#define QTAWS_UPDATEDISTRIBUTIONREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateDistributionRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT UpdateDistributionRequest : public CloudFrontRequest {

public:
    UpdateDistributionRequest(const UpdateDistributionRequest &other);
    UpdateDistributionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDistributionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
