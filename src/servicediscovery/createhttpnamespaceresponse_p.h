// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHTTPNAMESPACERESPONSE_P_H
#define QTAWS_CREATEHTTPNAMESPACERESPONSE_P_H

#include "servicediscoveryresponse_p.h"

namespace QtAws {
namespace ServiceDiscovery {

class CreateHttpNamespaceResponse;

class CreateHttpNamespaceResponsePrivate : public ServiceDiscoveryResponsePrivate {

public:

    explicit CreateHttpNamespaceResponsePrivate(CreateHttpNamespaceResponse * const q);

    void parseCreateHttpNamespaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateHttpNamespaceResponse)
    Q_DISABLE_COPY(CreateHttpNamespaceResponsePrivate)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
