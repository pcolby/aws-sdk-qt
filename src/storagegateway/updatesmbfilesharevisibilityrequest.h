// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMBFILESHAREVISIBILITYREQUEST_H
#define QTAWS_UPDATESMBFILESHAREVISIBILITYREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateSMBFileShareVisibilityRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateSMBFileShareVisibilityRequest : public StorageGatewayRequest {

public:
    UpdateSMBFileShareVisibilityRequest(const UpdateSMBFileShareVisibilityRequest &other);
    UpdateSMBFileShareVisibilityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSMBFileShareVisibilityRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
