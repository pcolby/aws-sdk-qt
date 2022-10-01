// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAPESREQUEST_H
#define QTAWS_CREATETAPESREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateTapesRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT CreateTapesRequest : public StorageGatewayRequest {

public:
    CreateTapesRequest(const CreateTapesRequest &other);
    CreateTapesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTapesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
