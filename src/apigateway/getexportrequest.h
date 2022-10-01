// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPORTREQUEST_H
#define QTAWS_GETEXPORTREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetExportRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetExportRequest : public ApiGatewayRequest {

public:
    GetExportRequest(const GetExportRequest &other);
    GetExportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExportRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
