// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEREQUEST_H
#define QTAWS_UPDATEDEVICEREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class UpdateDeviceRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT UpdateDeviceRequest : public NetworkManagerRequest {

public:
    UpdateDeviceRequest(const UpdateDeviceRequest &other);
    UpdateDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeviceRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
