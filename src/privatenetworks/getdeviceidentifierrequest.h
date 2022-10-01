// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEIDENTIFIERREQUEST_H
#define QTAWS_GETDEVICEIDENTIFIERREQUEST_H

#include "privatenetworksrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class GetDeviceIdentifierRequestPrivate;

class QTAWSPRIVATENETWORKS_EXPORT GetDeviceIdentifierRequest : public PrivateNetworksRequest {

public:
    GetDeviceIdentifierRequest(const GetDeviceIdentifierRequest &other);
    GetDeviceIdentifierRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeviceIdentifierRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
