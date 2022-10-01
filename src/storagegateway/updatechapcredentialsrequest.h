// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHAPCREDENTIALSREQUEST_H
#define QTAWS_UPDATECHAPCREDENTIALSREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateChapCredentialsRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateChapCredentialsRequest : public StorageGatewayRequest {

public:
    UpdateChapCredentialsRequest(const UpdateChapCredentialsRequest &other);
    UpdateChapCredentialsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateChapCredentialsRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
