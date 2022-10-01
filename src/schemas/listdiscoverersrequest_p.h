// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISCOVERERSREQUEST_P_H
#define QTAWS_LISTDISCOVERERSREQUEST_P_H

#include "schemasrequest_p.h"
#include "listdiscoverersrequest.h"

namespace QtAws {
namespace Schemas {

class ListDiscoverersRequest;

class ListDiscoverersRequestPrivate : public SchemasRequestPrivate {

public:
    ListDiscoverersRequestPrivate(const SchemasRequest::Action action,
                                   ListDiscoverersRequest * const q);
    ListDiscoverersRequestPrivate(const ListDiscoverersRequestPrivate &other,
                                   ListDiscoverersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDiscoverersRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
