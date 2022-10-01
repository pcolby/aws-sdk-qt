// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTABLEROWSREQUEST_P_H
#define QTAWS_LISTTABLEROWSREQUEST_P_H

#include "honeycoderequest_p.h"
#include "listtablerowsrequest.h"

namespace QtAws {
namespace Honeycode {

class ListTableRowsRequest;

class ListTableRowsRequestPrivate : public HoneycodeRequestPrivate {

public:
    ListTableRowsRequestPrivate(const HoneycodeRequest::Action action,
                                   ListTableRowsRequest * const q);
    ListTableRowsRequestPrivate(const ListTableRowsRequestPrivate &other,
                                   ListTableRowsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTableRowsRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif
