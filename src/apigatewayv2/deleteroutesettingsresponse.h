// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTESETTINGSRESPONSE_H
#define QTAWS_DELETEROUTESETTINGSRESPONSE_H

#include "apigatewayv2response.h"
#include "deleteroutesettingsrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteRouteSettingsResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteRouteSettingsResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    DeleteRouteSettingsResponse(const DeleteRouteSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRouteSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRouteSettingsResponse)
    Q_DISABLE_COPY(DeleteRouteSettingsResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
