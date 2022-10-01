// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTAGERESPONSE_H
#define QTAWS_CREATESTAGERESPONSE_H

#include "apigatewayresponse.h"
#include "createstagerequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateStageResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT CreateStageResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    CreateStageResponse(const CreateStageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStageResponse)
    Q_DISABLE_COPY(CreateStageResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
