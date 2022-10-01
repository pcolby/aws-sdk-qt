// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHEDISCSIVOLUMEREQUEST_H
#define QTAWS_CREATECACHEDISCSIVOLUMEREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateCachediSCSIVolumeRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT CreateCachediSCSIVolumeRequest : public StorageGatewayRequest {

public:
    CreateCachediSCSIVolumeRequest(const CreateCachediSCSIVolumeRequest &other);
    CreateCachediSCSIVolumeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCachediSCSIVolumeRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
