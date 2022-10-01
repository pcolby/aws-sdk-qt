// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEMAVERSIONREQUEST_P_H
#define QTAWS_DELETESCHEMAVERSIONREQUEST_P_H

#include "schemasrequest_p.h"
#include "deleteschemaversionrequest.h"

namespace QtAws {
namespace Schemas {

class DeleteSchemaVersionRequest;

class DeleteSchemaVersionRequestPrivate : public SchemasRequestPrivate {

public:
    DeleteSchemaVersionRequestPrivate(const SchemasRequest::Action action,
                                   DeleteSchemaVersionRequest * const q);
    DeleteSchemaVersionRequestPrivate(const DeleteSchemaVersionRequestPrivate &other,
                                   DeleteSchemaVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSchemaVersionRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
