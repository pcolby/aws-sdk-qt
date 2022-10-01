// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRIVATEDNSNAMESPACERESPONSE_P_H
#define QTAWS_UPDATEPRIVATEDNSNAMESPACERESPONSE_P_H

#include "servicediscoveryresponse_p.h"

namespace QtAws {
namespace ServiceDiscovery {

class UpdatePrivateDnsNamespaceResponse;

class UpdatePrivateDnsNamespaceResponsePrivate : public ServiceDiscoveryResponsePrivate {

public:

    explicit UpdatePrivateDnsNamespaceResponsePrivate(UpdatePrivateDnsNamespaceResponse * const q);

    void parseUpdatePrivateDnsNamespaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePrivateDnsNamespaceResponse)
    Q_DISABLE_COPY(UpdatePrivateDnsNamespaceResponsePrivate)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
