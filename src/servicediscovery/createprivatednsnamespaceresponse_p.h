// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRIVATEDNSNAMESPACERESPONSE_P_H
#define QTAWS_CREATEPRIVATEDNSNAMESPACERESPONSE_P_H

#include "servicediscoveryresponse_p.h"

namespace QtAws {
namespace ServiceDiscovery {

class CreatePrivateDnsNamespaceResponse;

class CreatePrivateDnsNamespaceResponsePrivate : public ServiceDiscoveryResponsePrivate {

public:

    explicit CreatePrivateDnsNamespaceResponsePrivate(CreatePrivateDnsNamespaceResponse * const q);

    void parseCreatePrivateDnsNamespaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePrivateDnsNamespaceResponse)
    Q_DISABLE_COPY(CreatePrivateDnsNamespaceResponsePrivate)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
