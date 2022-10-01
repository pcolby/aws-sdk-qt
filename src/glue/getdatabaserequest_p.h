// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATABASEREQUEST_P_H
#define QTAWS_GETDATABASEREQUEST_P_H

#include "gluerequest_p.h"
#include "getdatabaserequest.h"

namespace QtAws {
namespace Glue {

class GetDatabaseRequest;

class GetDatabaseRequestPrivate : public GlueRequestPrivate {

public:
    GetDatabaseRequestPrivate(const GlueRequest::Action action,
                                   GetDatabaseRequest * const q);
    GetDatabaseRequestPrivate(const GetDatabaseRequestPrivate &other,
                                   GetDatabaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDatabaseRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
