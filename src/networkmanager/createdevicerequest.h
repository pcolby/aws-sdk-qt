// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICEREQUEST_H
#define QTAWS_CREATEDEVICEREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateDeviceRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT CreateDeviceRequest : public NetworkManagerRequest {

public:
    CreateDeviceRequest(const CreateDeviceRequest &other);
    CreateDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeviceRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
