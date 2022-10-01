// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERSERVICEDEPLOYMENTSREQUEST_H
#define QTAWS_GETCONTAINERSERVICEDEPLOYMENTSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetContainerServiceDeploymentsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetContainerServiceDeploymentsRequest : public LightsailRequest {

public:
    GetContainerServiceDeploymentsRequest(const GetContainerServiceDeploymentsRequest &other);
    GetContainerServiceDeploymentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContainerServiceDeploymentsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
