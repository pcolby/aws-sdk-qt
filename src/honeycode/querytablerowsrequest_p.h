// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYTABLEROWSREQUEST_P_H
#define QTAWS_QUERYTABLEROWSREQUEST_P_H

#include "honeycoderequest_p.h"
#include "querytablerowsrequest.h"

namespace QtAws {
namespace Honeycode {

class QueryTableRowsRequest;

class QueryTableRowsRequestPrivate : public HoneycodeRequestPrivate {

public:
    QueryTableRowsRequestPrivate(const HoneycodeRequest::Action action,
                                   QueryTableRowsRequest * const q);
    QueryTableRowsRequestPrivate(const QueryTableRowsRequestPrivate &other,
                                   QueryTableRowsRequest * const q);

private:
    Q_DECLARE_PUBLIC(QueryTableRowsRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif
