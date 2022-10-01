// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAGENTSREQUEST_P_H
#define QTAWS_LISTAGENTSREQUEST_P_H

#include "datasyncrequest_p.h"
#include "listagentsrequest.h"

namespace QtAws {
namespace DataSync {

class ListAgentsRequest;

class ListAgentsRequestPrivate : public DataSyncRequestPrivate {

public:
    ListAgentsRequestPrivate(const DataSyncRequest::Action action,
                                   ListAgentsRequest * const q);
    ListAgentsRequestPrivate(const ListAgentsRequestPrivate &other,
                                   ListAgentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAgentsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
