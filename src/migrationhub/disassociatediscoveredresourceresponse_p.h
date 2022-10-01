// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDISCOVEREDRESOURCERESPONSE_P_H
#define QTAWS_DISASSOCIATEDISCOVEREDRESOURCERESPONSE_P_H

#include "migrationhubresponse_p.h"

namespace QtAws {
namespace MigrationHub {

class DisassociateDiscoveredResourceResponse;

class DisassociateDiscoveredResourceResponsePrivate : public MigrationHubResponsePrivate {

public:

    explicit DisassociateDiscoveredResourceResponsePrivate(DisassociateDiscoveredResourceResponse * const q);

    void parseDisassociateDiscoveredResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateDiscoveredResourceResponse)
    Q_DISABLE_COPY(DisassociateDiscoveredResourceResponsePrivate)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
