// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOCATIONSREQUEST_P_H
#define QTAWS_LISTLOCATIONSREQUEST_P_H

#include "datasyncrequest_p.h"
#include "listlocationsrequest.h"

namespace QtAws {
namespace DataSync {

class ListLocationsRequest;

class ListLocationsRequestPrivate : public DataSyncRequestPrivate {

public:
    ListLocationsRequestPrivate(const DataSyncRequest::Action action,
                                   ListLocationsRequest * const q);
    ListLocationsRequestPrivate(const ListLocationsRequestPrivate &other,
                                   ListLocationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLocationsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
