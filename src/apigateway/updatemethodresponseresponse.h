// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMETHODRESPONSERESPONSE_H
#define QTAWS_UPDATEMETHODRESPONSERESPONSE_H

#include "apigatewayresponse.h"
#include "updatemethodresponserequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateMethodResponseResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateMethodResponseResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    UpdateMethodResponseResponse(const UpdateMethodResponseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMethodResponseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMethodResponseResponse)
    Q_DISABLE_COPY(UpdateMethodResponseResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
