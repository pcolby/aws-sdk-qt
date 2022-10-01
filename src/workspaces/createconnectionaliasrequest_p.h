// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTIONALIASREQUEST_P_H
#define QTAWS_CREATECONNECTIONALIASREQUEST_P_H

#include "workspacesrequest_p.h"
#include "createconnectionaliasrequest.h"

namespace QtAws {
namespace WorkSpaces {

class CreateConnectionAliasRequest;

class CreateConnectionAliasRequestPrivate : public WorkSpacesRequestPrivate {

public:
    CreateConnectionAliasRequestPrivate(const WorkSpacesRequest::Action action,
                                   CreateConnectionAliasRequest * const q);
    CreateConnectionAliasRequestPrivate(const CreateConnectionAliasRequestPrivate &other,
                                   CreateConnectionAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConnectionAliasRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
