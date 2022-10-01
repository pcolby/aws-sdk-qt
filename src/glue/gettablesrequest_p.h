// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLESREQUEST_P_H
#define QTAWS_GETTABLESREQUEST_P_H

#include "gluerequest_p.h"
#include "gettablesrequest.h"

namespace QtAws {
namespace Glue {

class GetTablesRequest;

class GetTablesRequestPrivate : public GlueRequestPrivate {

public:
    GetTablesRequestPrivate(const GlueRequest::Action action,
                                   GetTablesRequest * const q);
    GetTablesRequestPrivate(const GetTablesRequestPrivate &other,
                                   GetTablesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTablesRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
