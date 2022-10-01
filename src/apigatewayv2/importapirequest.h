// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTAPIREQUEST_H
#define QTAWS_IMPORTAPIREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class ImportApiRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT ImportApiRequest : public ApiGatewayV2Request {

public:
    ImportApiRequest(const ImportApiRequest &other);
    ImportApiRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportApiRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
