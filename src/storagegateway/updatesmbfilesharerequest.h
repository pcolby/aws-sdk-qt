// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMBFILESHAREREQUEST_H
#define QTAWS_UPDATESMBFILESHAREREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateSMBFileShareRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateSMBFileShareRequest : public StorageGatewayRequest {

public:
    UpdateSMBFileShareRequest(const UpdateSMBFileShareRequest &other);
    UpdateSMBFileShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSMBFileShareRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
