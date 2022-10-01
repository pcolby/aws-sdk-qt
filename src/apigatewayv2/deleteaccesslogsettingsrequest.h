// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSLOGSETTINGSREQUEST_H
#define QTAWS_DELETEACCESSLOGSETTINGSREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteAccessLogSettingsRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteAccessLogSettingsRequest : public ApiGatewayV2Request {

public:
    DeleteAccessLogSettingsRequest(const DeleteAccessLogSettingsRequest &other);
    DeleteAccessLogSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccessLogSettingsRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
