// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIKEYSRESPONSE_H
#define QTAWS_GETAPIKEYSRESPONSE_H

#include "apigatewayresponse.h"
#include "getapikeysrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetApiKeysResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetApiKeysResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetApiKeysResponse(const GetApiKeysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApiKeysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApiKeysResponse)
    Q_DISABLE_COPY(GetApiKeysResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
