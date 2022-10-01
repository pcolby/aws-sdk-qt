// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDISCOVEREDRESOURCERESPONSE_P_H
#define QTAWS_ASSOCIATEDISCOVEREDRESOURCERESPONSE_P_H

#include "migrationhubresponse_p.h"

namespace QtAws {
namespace MigrationHub {

class AssociateDiscoveredResourceResponse;

class AssociateDiscoveredResourceResponsePrivate : public MigrationHubResponsePrivate {

public:

    explicit AssociateDiscoveredResourceResponsePrivate(AssociateDiscoveredResourceResponse * const q);

    void parseAssociateDiscoveredResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateDiscoveredResourceResponse)
    Q_DISABLE_COPY(AssociateDiscoveredResourceResponsePrivate)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
