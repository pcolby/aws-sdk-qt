// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDISCOVEREDRESOURCEREQUEST_P_H
#define QTAWS_DISASSOCIATEDISCOVEREDRESOURCEREQUEST_P_H

#include "migrationhubrequest_p.h"
#include "disassociatediscoveredresourcerequest.h"

namespace QtAws {
namespace MigrationHub {

class DisassociateDiscoveredResourceRequest;

class DisassociateDiscoveredResourceRequestPrivate : public MigrationHubRequestPrivate {

public:
    DisassociateDiscoveredResourceRequestPrivate(const MigrationHubRequest::Action action,
                                   DisassociateDiscoveredResourceRequest * const q);
    DisassociateDiscoveredResourceRequestPrivate(const DisassociateDiscoveredResourceRequestPrivate &other,
                                   DisassociateDiscoveredResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateDiscoveredResourceRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
