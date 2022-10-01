// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREQUESTVALIDATORRESPONSE_H
#define QTAWS_UPDATEREQUESTVALIDATORRESPONSE_H

#include "apigatewayresponse.h"
#include "updaterequestvalidatorrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateRequestValidatorResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateRequestValidatorResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    UpdateRequestValidatorResponse(const UpdateRequestValidatorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRequestValidatorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRequestValidatorResponse)
    Q_DISABLE_COPY(UpdateRequestValidatorResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
