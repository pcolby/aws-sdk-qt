// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGATEWAYREQUEST_H
#define QTAWS_DELETEGATEWAYREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DeleteGatewayRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT DeleteGatewayRequest : public IoTSiteWiseRequest {

public:
    DeleteGatewayRequest(const DeleteGatewayRequest &other);
    DeleteGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGatewayRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
