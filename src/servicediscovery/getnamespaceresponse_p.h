// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNAMESPACERESPONSE_P_H
#define QTAWS_GETNAMESPACERESPONSE_P_H

#include "servicediscoveryresponse_p.h"

namespace QtAws {
namespace ServiceDiscovery {

class GetNamespaceResponse;

class GetNamespaceResponsePrivate : public ServiceDiscoveryResponsePrivate {

public:

    explicit GetNamespaceResponsePrivate(GetNamespaceResponse * const q);

    void parseGetNamespaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetNamespaceResponse)
    Q_DISABLE_COPY(GetNamespaceResponsePrivate)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
