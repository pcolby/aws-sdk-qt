// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETREVISIONSREQUEST_P_H
#define QTAWS_LISTDATASETREVISIONSREQUEST_P_H

#include "dataexchangerequest_p.h"
#include "listdatasetrevisionsrequest.h"

namespace QtAws {
namespace DataExchange {

class ListDataSetRevisionsRequest;

class ListDataSetRevisionsRequestPrivate : public DataExchangeRequestPrivate {

public:
    ListDataSetRevisionsRequestPrivate(const DataExchangeRequest::Action action,
                                   ListDataSetRevisionsRequest * const q);
    ListDataSetRevisionsRequestPrivate(const ListDataSetRevisionsRequestPrivate &other,
                                   ListDataSetRevisionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDataSetRevisionsRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
