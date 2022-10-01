// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPUBLICDNSNAMESPACERESPONSE_P_H
#define QTAWS_CREATEPUBLICDNSNAMESPACERESPONSE_P_H

#include "servicediscoveryresponse_p.h"

namespace QtAws {
namespace ServiceDiscovery {

class CreatePublicDnsNamespaceResponse;

class CreatePublicDnsNamespaceResponsePrivate : public ServiceDiscoveryResponsePrivate {

public:

    explicit CreatePublicDnsNamespaceResponsePrivate(CreatePublicDnsNamespaceResponse * const q);

    void parseCreatePublicDnsNamespaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePublicDnsNamespaceResponse)
    Q_DISABLE_COPY(CreatePublicDnsNamespaceResponsePrivate)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
