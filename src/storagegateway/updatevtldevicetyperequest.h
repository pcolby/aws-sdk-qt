// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVTLDEVICETYPEREQUEST_H
#define QTAWS_UPDATEVTLDEVICETYPEREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateVTLDeviceTypeRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateVTLDeviceTypeRequest : public StorageGatewayRequest {

public:
    UpdateVTLDeviceTypeRequest(const UpdateVTLDeviceTypeRequest &other);
    UpdateVTLDeviceTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVTLDeviceTypeRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
