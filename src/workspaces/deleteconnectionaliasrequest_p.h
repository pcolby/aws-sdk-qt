// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTIONALIASREQUEST_P_H
#define QTAWS_DELETECONNECTIONALIASREQUEST_P_H

#include "workspacesrequest_p.h"
#include "deleteconnectionaliasrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DeleteConnectionAliasRequest;

class DeleteConnectionAliasRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DeleteConnectionAliasRequestPrivate(const WorkSpacesRequest::Action action,
                                   DeleteConnectionAliasRequest * const q);
    DeleteConnectionAliasRequestPrivate(const DeleteConnectionAliasRequestPrivate &other,
                                   DeleteConnectionAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConnectionAliasRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
