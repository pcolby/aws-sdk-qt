// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAPEPOOLREQUEST_H
#define QTAWS_CREATETAPEPOOLREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateTapePoolRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT CreateTapePoolRequest : public StorageGatewayRequest {

public:
    CreateTapePoolRequest(const CreateTapePoolRequest &other);
    CreateTapePoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTapePoolRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
