// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEIDENTIFIERSREQUEST_H
#define QTAWS_LISTDEVICEIDENTIFIERSREQUEST_H

#include "privatenetworksrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class ListDeviceIdentifiersRequestPrivate;

class QTAWSPRIVATENETWORKS_EXPORT ListDeviceIdentifiersRequest : public PrivateNetworksRequest {

public:
    ListDeviceIdentifiersRequest(const ListDeviceIdentifiersRequest &other);
    ListDeviceIdentifiersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeviceIdentifiersRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
