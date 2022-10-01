// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTAPIKEYSREQUEST_H
#define QTAWS_IMPORTAPIKEYSREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class ImportApiKeysRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT ImportApiKeysRequest : public ApiGatewayRequest {

public:
    ImportApiKeysRequest(const ImportApiKeysRequest &other);
    ImportApiKeysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportApiKeysRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
