// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEMAVERSIONSREQUEST_P_H
#define QTAWS_LISTSCHEMAVERSIONSREQUEST_P_H

#include "gluerequest_p.h"
#include "listschemaversionsrequest.h"

namespace QtAws {
namespace Glue {

class ListSchemaVersionsRequest;

class ListSchemaVersionsRequestPrivate : public GlueRequestPrivate {

public:
    ListSchemaVersionsRequestPrivate(const GlueRequest::Action action,
                                   ListSchemaVersionsRequest * const q);
    ListSchemaVersionsRequestPrivate(const ListSchemaVersionsRequestPrivate &other,
                                   ListSchemaVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSchemaVersionsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
