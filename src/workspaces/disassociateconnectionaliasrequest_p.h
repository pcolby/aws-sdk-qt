// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECONNECTIONALIASREQUEST_P_H
#define QTAWS_DISASSOCIATECONNECTIONALIASREQUEST_P_H

#include "workspacesrequest_p.h"
#include "disassociateconnectionaliasrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DisassociateConnectionAliasRequest;

class DisassociateConnectionAliasRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DisassociateConnectionAliasRequestPrivate(const WorkSpacesRequest::Action action,
                                   DisassociateConnectionAliasRequest * const q);
    DisassociateConnectionAliasRequestPrivate(const DisassociateConnectionAliasRequestPrivate &other,
                                   DisassociateConnectionAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateConnectionAliasRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
