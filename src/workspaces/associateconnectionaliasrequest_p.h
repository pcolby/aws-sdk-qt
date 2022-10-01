// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECONNECTIONALIASREQUEST_P_H
#define QTAWS_ASSOCIATECONNECTIONALIASREQUEST_P_H

#include "workspacesrequest_p.h"
#include "associateconnectionaliasrequest.h"

namespace QtAws {
namespace WorkSpaces {

class AssociateConnectionAliasRequest;

class AssociateConnectionAliasRequestPrivate : public WorkSpacesRequestPrivate {

public:
    AssociateConnectionAliasRequestPrivate(const WorkSpacesRequest::Action action,
                                   AssociateConnectionAliasRequest * const q);
    AssociateConnectionAliasRequestPrivate(const AssociateConnectionAliasRequestPrivate &other,
                                   AssociateConnectionAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateConnectionAliasRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
