// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMETHODRESPONSERESPONSE_H
#define QTAWS_DELETEMETHODRESPONSERESPONSE_H

#include "apigatewayresponse.h"
#include "deletemethodresponserequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteMethodResponseResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteMethodResponseResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    DeleteMethodResponseResponse(const DeleteMethodResponseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMethodResponseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMethodResponseResponse)
    Q_DISABLE_COPY(DeleteMethodResponseResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
