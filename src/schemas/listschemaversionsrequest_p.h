// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEMAVERSIONSREQUEST_P_H
#define QTAWS_LISTSCHEMAVERSIONSREQUEST_P_H

#include "schemasrequest_p.h"
#include "listschemaversionsrequest.h"

namespace QtAws {
namespace Schemas {

class ListSchemaVersionsRequest;

class ListSchemaVersionsRequestPrivate : public SchemasRequestPrivate {

public:
    ListSchemaVersionsRequestPrivate(const SchemasRequest::Action action,
                                   ListSchemaVersionsRequest * const q);
    ListSchemaVersionsRequestPrivate(const ListSchemaVersionsRequestPrivate &other,
                                   ListSchemaVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSchemaVersionsRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
