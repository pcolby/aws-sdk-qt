// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGUREACCESSPOINTREQUEST_H
#define QTAWS_CONFIGUREACCESSPOINTREQUEST_H

#include "privatenetworksrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class ConfigureAccessPointRequestPrivate;

class QTAWSPRIVATENETWORKS_EXPORT ConfigureAccessPointRequest : public PrivateNetworksRequest {

public:
    ConfigureAccessPointRequest(const ConfigureAccessPointRequest &other);
    ConfigureAccessPointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfigureAccessPointRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
