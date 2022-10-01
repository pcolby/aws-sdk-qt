// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENAMESPACERESPONSE_P_H
#define QTAWS_DELETENAMESPACERESPONSE_P_H

#include "servicediscoveryresponse_p.h"

namespace QtAws {
namespace ServiceDiscovery {

class DeleteNamespaceResponse;

class DeleteNamespaceResponsePrivate : public ServiceDiscoveryResponsePrivate {

public:

    explicit DeleteNamespaceResponsePrivate(DeleteNamespaceResponse * const q);

    void parseDeleteNamespaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNamespaceResponse)
    Q_DISABLE_COPY(DeleteNamespaceResponsePrivate)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
