// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATABASESREQUEST_P_H
#define QTAWS_GETDATABASESREQUEST_P_H

#include "gluerequest_p.h"
#include "getdatabasesrequest.h"

namespace QtAws {
namespace Glue {

class GetDatabasesRequest;

class GetDatabasesRequestPrivate : public GlueRequestPrivate {

public:
    GetDatabasesRequestPrivate(const GlueRequest::Action action,
                                   GetDatabasesRequest * const q);
    GetDatabasesRequestPrivate(const GetDatabasesRequestPrivate &other,
                                   GetDatabasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDatabasesRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
