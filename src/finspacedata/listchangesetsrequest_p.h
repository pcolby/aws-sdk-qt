// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANGESETSREQUEST_P_H
#define QTAWS_LISTCHANGESETSREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "listchangesetsrequest.h"

namespace QtAws {
namespace FinspaceData {

class ListChangesetsRequest;

class ListChangesetsRequestPrivate : public FinspaceDataRequestPrivate {

public:
    ListChangesetsRequestPrivate(const FinspaceDataRequest::Action action,
                                   ListChangesetsRequest * const q);
    ListChangesetsRequestPrivate(const ListChangesetsRequestPrivate &other,
                                   ListChangesetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListChangesetsRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
