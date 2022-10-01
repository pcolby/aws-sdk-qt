// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGUREACCESSPOINTREQUEST_P_H
#define QTAWS_CONFIGUREACCESSPOINTREQUEST_P_H

#include "privatenetworksrequest_p.h"
#include "configureaccesspointrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class ConfigureAccessPointRequest;

class ConfigureAccessPointRequestPrivate : public PrivateNetworksRequestPrivate {

public:
    ConfigureAccessPointRequestPrivate(const PrivateNetworksRequest::Action action,
                                   ConfigureAccessPointRequest * const q);
    ConfigureAccessPointRequestPrivate(const ConfigureAccessPointRequestPrivate &other,
                                   ConfigureAccessPointRequest * const q);

private:
    Q_DECLARE_PUBLIC(ConfigureAccessPointRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
