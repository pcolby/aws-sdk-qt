// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDISCOVEREDRESOURCEREQUEST_P_H
#define QTAWS_ASSOCIATEDISCOVEREDRESOURCEREQUEST_P_H

#include "migrationhubrequest_p.h"
#include "associatediscoveredresourcerequest.h"

namespace QtAws {
namespace MigrationHub {

class AssociateDiscoveredResourceRequest;

class AssociateDiscoveredResourceRequestPrivate : public MigrationHubRequestPrivate {

public:
    AssociateDiscoveredResourceRequestPrivate(const MigrationHubRequest::Action action,
                                   AssociateDiscoveredResourceRequest * const q);
    AssociateDiscoveredResourceRequestPrivate(const AssociateDiscoveredResourceRequestPrivate &other,
                                   AssociateDiscoveredResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateDiscoveredResourceRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
