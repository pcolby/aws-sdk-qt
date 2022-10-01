// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPOSITORYSYNCDEFINITIONSREQUEST_P_H
#define QTAWS_LISTREPOSITORYSYNCDEFINITIONSREQUEST_P_H

#include "protonrequest_p.h"
#include "listrepositorysyncdefinitionsrequest.h"

namespace QtAws {
namespace Proton {

class ListRepositorySyncDefinitionsRequest;

class ListRepositorySyncDefinitionsRequestPrivate : public ProtonRequestPrivate {

public:
    ListRepositorySyncDefinitionsRequestPrivate(const ProtonRequest::Action action,
                                   ListRepositorySyncDefinitionsRequest * const q);
    ListRepositorySyncDefinitionsRequestPrivate(const ListRepositorySyncDefinitionsRequestPrivate &other,
                                   ListRepositorySyncDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRepositorySyncDefinitionsRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
