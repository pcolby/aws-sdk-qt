// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTABLESREQUEST_P_H
#define QTAWS_LISTTABLESREQUEST_P_H

#include "redshiftdatarequest_p.h"
#include "listtablesrequest.h"

namespace QtAws {
namespace RedshiftData {

class ListTablesRequest;

class ListTablesRequestPrivate : public RedshiftDataRequestPrivate {

public:
    ListTablesRequestPrivate(const RedshiftDataRequest::Action action,
                                   ListTablesRequest * const q);
    ListTablesRequestPrivate(const ListTablesRequestPrivate &other,
                                   ListTablesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTablesRequest)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
