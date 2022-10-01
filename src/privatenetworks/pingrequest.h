// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PINGREQUEST_H
#define QTAWS_PINGREQUEST_H

#include "privatenetworksrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class PingRequestPrivate;

class QTAWSPRIVATENETWORKS_EXPORT PingRequest : public PrivateNetworksRequest {

public:
    PingRequest(const PingRequest &other);
    PingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PingRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
