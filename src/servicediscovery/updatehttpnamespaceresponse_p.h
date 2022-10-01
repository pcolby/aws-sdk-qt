// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHTTPNAMESPACERESPONSE_P_H
#define QTAWS_UPDATEHTTPNAMESPACERESPONSE_P_H

#include "servicediscoveryresponse_p.h"

namespace QtAws {
namespace ServiceDiscovery {

class UpdateHttpNamespaceResponse;

class UpdateHttpNamespaceResponsePrivate : public ServiceDiscoveryResponsePrivate {

public:

    explicit UpdateHttpNamespaceResponsePrivate(UpdateHttpNamespaceResponse * const q);

    void parseUpdateHttpNamespaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateHttpNamespaceResponse)
    Q_DISABLE_COPY(UpdateHttpNamespaceResponsePrivate)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
