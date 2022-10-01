// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYREQUEST_H
#define QTAWS_UPDATEGATEWAYREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateGatewayRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT UpdateGatewayRequest : public IoTSiteWiseRequest {

public:
    UpdateGatewayRequest(const UpdateGatewayRequest &other);
    UpdateGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGatewayRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
