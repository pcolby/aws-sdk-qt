// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEDEVICEIDENTIFIERREQUEST_H
#define QTAWS_DEACTIVATEDEVICEIDENTIFIERREQUEST_H

#include "privatenetworksrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class DeactivateDeviceIdentifierRequestPrivate;

class QTAWSPRIVATENETWORKS_EXPORT DeactivateDeviceIdentifierRequest : public PrivateNetworksRequest {

public:
    DeactivateDeviceIdentifierRequest(const DeactivateDeviceIdentifierRequest &other);
    DeactivateDeviceIdentifierRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeactivateDeviceIdentifierRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
