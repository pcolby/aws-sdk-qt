// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESMBFILESHAREREQUEST_H
#define QTAWS_CREATESMBFILESHAREREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateSMBFileShareRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT CreateSMBFileShareRequest : public StorageGatewayRequest {

public:
    CreateSMBFileShareRequest(const CreateSMBFileShareRequest &other);
    CreateSMBFileShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSMBFileShareRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
