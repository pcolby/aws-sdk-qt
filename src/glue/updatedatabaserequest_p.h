// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATABASEREQUEST_P_H
#define QTAWS_UPDATEDATABASEREQUEST_P_H

#include "gluerequest_p.h"
#include "updatedatabaserequest.h"

namespace QtAws {
namespace Glue {

class UpdateDatabaseRequest;

class UpdateDatabaseRequestPrivate : public GlueRequestPrivate {

public:
    UpdateDatabaseRequestPrivate(const GlueRequest::Action action,
                                   UpdateDatabaseRequest * const q);
    UpdateDatabaseRequestPrivate(const UpdateDatabaseRequestPrivate &other,
                                   UpdateDatabaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDatabaseRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
