// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTAGERESPONSE_H
#define QTAWS_DELETESTAGERESPONSE_H

#include "apigatewayresponse.h"
#include "deletestagerequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteStageResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteStageResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    DeleteStageResponse(const DeleteStageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteStageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStageResponse)
    Q_DISABLE_COPY(DeleteStageResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
