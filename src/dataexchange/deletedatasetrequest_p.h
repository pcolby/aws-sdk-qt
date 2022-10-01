// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETREQUEST_P_H
#define QTAWS_DELETEDATASETREQUEST_P_H

#include "dataexchangerequest_p.h"
#include "deletedatasetrequest.h"

namespace QtAws {
namespace DataExchange {

class DeleteDataSetRequest;

class DeleteDataSetRequestPrivate : public DataExchangeRequestPrivate {

public:
    DeleteDataSetRequestPrivate(const DataExchangeRequest::Action action,
                                   DeleteDataSetRequest * const q);
    DeleteDataSetRequestPrivate(const DeleteDataSetRequestPrivate &other,
                                   DeleteDataSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDataSetRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
