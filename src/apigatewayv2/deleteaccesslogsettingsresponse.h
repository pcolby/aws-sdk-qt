// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSLOGSETTINGSRESPONSE_H
#define QTAWS_DELETEACCESSLOGSETTINGSRESPONSE_H

#include "apigatewayv2response.h"
#include "deleteaccesslogsettingsrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteAccessLogSettingsResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteAccessLogSettingsResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    DeleteAccessLogSettingsResponse(const DeleteAccessLogSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAccessLogSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccessLogSettingsResponse)
    Q_DISABLE_COPY(DeleteAccessLogSettingsResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
