// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREQUESTVALIDATORRESPONSE_H
#define QTAWS_DELETEREQUESTVALIDATORRESPONSE_H

#include "apigatewayresponse.h"
#include "deleterequestvalidatorrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteRequestValidatorResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteRequestValidatorResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    DeleteRequestValidatorResponse(const DeleteRequestValidatorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRequestValidatorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRequestValidatorResponse)
    Q_DISABLE_COPY(DeleteRequestValidatorResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
