// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTRESTAPIREQUEST_H
#define QTAWS_IMPORTRESTAPIREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class ImportRestApiRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT ImportRestApiRequest : public ApiGatewayRequest {

public:
    ImportRestApiRequest(const ImportRestApiRequest &other);
    ImportRestApiRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportRestApiRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
