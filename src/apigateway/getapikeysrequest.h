// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIKEYSREQUEST_H
#define QTAWS_GETAPIKEYSREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetApiKeysRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetApiKeysRequest : public ApiGatewayRequest {

public:
    GetApiKeysRequest(const GetApiKeysRequest &other);
    GetApiKeysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApiKeysRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
