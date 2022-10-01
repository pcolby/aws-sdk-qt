// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMETHODRESPONSE_H
#define QTAWS_UPDATEMETHODRESPONSE_H

#include "apigatewayresponse.h"
#include "updatemethodrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateMethodResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateMethodResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    UpdateMethodResponse(const UpdateMethodRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMethodRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMethodResponse)
    Q_DISABLE_COPY(UpdateMethodResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
