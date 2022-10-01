// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSAGEPLANKEYREQUEST_H
#define QTAWS_DELETEUSAGEPLANKEYREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteUsagePlanKeyRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteUsagePlanKeyRequest : public ApiGatewayRequest {

public:
    DeleteUsagePlanKeyRequest(const DeleteUsagePlanKeyRequest &other);
    DeleteUsagePlanKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUsagePlanKeyRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
