// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGISTRIESREQUEST_P_H
#define QTAWS_LISTREGISTRIESREQUEST_P_H

#include "schemasrequest_p.h"
#include "listregistriesrequest.h"

namespace QtAws {
namespace Schemas {

class ListRegistriesRequest;

class ListRegistriesRequestPrivate : public SchemasRequestPrivate {

public:
    ListRegistriesRequestPrivate(const SchemasRequest::Action action,
                                   ListRegistriesRequest * const q);
    ListRegistriesRequestPrivate(const ListRegistriesRequestPrivate &other,
                                   ListRegistriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRegistriesRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
