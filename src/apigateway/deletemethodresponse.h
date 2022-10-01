// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMETHODRESPONSE_H
#define QTAWS_DELETEMETHODRESPONSE_H

#include "apigatewayresponse.h"
#include "deletemethodrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteMethodResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteMethodResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    DeleteMethodResponse(const DeleteMethodRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMethodRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMethodResponse)
    Q_DISABLE_COPY(DeleteMethodResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
