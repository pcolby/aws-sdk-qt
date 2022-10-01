// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTTOCONNECTIONREQUEST_H
#define QTAWS_POSTTOCONNECTIONREQUEST_H

#include "apigatewaymanagementrequest.h"

namespace QtAws {
namespace ApiGatewayManagement {

class PostToConnectionRequestPrivate;

class QTAWSAPIGATEWAYMANAGEMENT_EXPORT PostToConnectionRequest : public ApiGatewayManagementRequest {

public:
    PostToConnectionRequest(const PostToConnectionRequest &other);
    PostToConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PostToConnectionRequest)

};

} // namespace ApiGatewayManagement
} // namespace QtAws

#endif
