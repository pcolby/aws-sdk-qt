// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPUBLICDNSNAMESPACERESPONSE_P_H
#define QTAWS_UPDATEPUBLICDNSNAMESPACERESPONSE_P_H

#include "servicediscoveryresponse_p.h"

namespace QtAws {
namespace ServiceDiscovery {

class UpdatePublicDnsNamespaceResponse;

class UpdatePublicDnsNamespaceResponsePrivate : public ServiceDiscoveryResponsePrivate {

public:

    explicit UpdatePublicDnsNamespaceResponsePrivate(UpdatePublicDnsNamespaceResponse * const q);

    void parseUpdatePublicDnsNamespaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePublicDnsNamespaceResponse)
    Q_DISABLE_COPY(UpdatePublicDnsNamespaceResponsePrivate)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
