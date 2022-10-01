// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTOREDISCSIVOLUMEREQUEST_H
#define QTAWS_CREATESTOREDISCSIVOLUMEREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateStorediSCSIVolumeRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT CreateStorediSCSIVolumeRequest : public StorageGatewayRequest {

public:
    CreateStorediSCSIVolumeRequest(const CreateStorediSCSIVolumeRequest &other);
    CreateStorediSCSIVolumeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStorediSCSIVolumeRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
