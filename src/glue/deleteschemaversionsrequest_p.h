// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEMAVERSIONSREQUEST_P_H
#define QTAWS_DELETESCHEMAVERSIONSREQUEST_P_H

#include "gluerequest_p.h"
#include "deleteschemaversionsrequest.h"

namespace QtAws {
namespace Glue {

class DeleteSchemaVersionsRequest;

class DeleteSchemaVersionsRequestPrivate : public GlueRequestPrivate {

public:
    DeleteSchemaVersionsRequestPrivate(const GlueRequest::Action action,
                                   DeleteSchemaVersionsRequest * const q);
    DeleteSchemaVersionsRequestPrivate(const DeleteSchemaVersionsRequestPrivate &other,
                                   DeleteSchemaVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSchemaVersionsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
