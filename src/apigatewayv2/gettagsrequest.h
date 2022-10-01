// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTAGSREQUEST_H
#define QTAWS_GETTAGSREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetTagsRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetTagsRequest : public ApiGatewayV2Request {

public:
    GetTagsRequest(const GetTagsRequest &other);
    GetTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTagsRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
