// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATABASEREQUEST_P_H
#define QTAWS_DELETEDATABASEREQUEST_P_H

#include "gluerequest_p.h"
#include "deletedatabaserequest.h"

namespace QtAws {
namespace Glue {

class DeleteDatabaseRequest;

class DeleteDatabaseRequestPrivate : public GlueRequestPrivate {

public:
    DeleteDatabaseRequestPrivate(const GlueRequest::Action action,
                                   DeleteDatabaseRequest * const q);
    DeleteDatabaseRequestPrivate(const DeleteDatabaseRequestPrivate &other,
                                   DeleteDatabaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDatabaseRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
