// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEMAREQUEST_P_H
#define QTAWS_DELETESCHEMAREQUEST_P_H

#include "gluerequest_p.h"
#include "deleteschemarequest.h"

namespace QtAws {
namespace Glue {

class DeleteSchemaRequest;

class DeleteSchemaRequestPrivate : public GlueRequestPrivate {

public:
    DeleteSchemaRequestPrivate(const GlueRequest::Action action,
                                   DeleteSchemaRequest * const q);
    DeleteSchemaRequestPrivate(const DeleteSchemaRequestPrivate &other,
                                   DeleteSchemaRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSchemaRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
