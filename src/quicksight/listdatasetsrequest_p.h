// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETSREQUEST_P_H
#define QTAWS_LISTDATASETSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "listdatasetsrequest.h"

namespace QtAws {
namespace QuickSight {

class ListDataSetsRequest;

class ListDataSetsRequestPrivate : public QuickSightRequestPrivate {

public:
    ListDataSetsRequestPrivate(const QuickSightRequest::Action action,
                                   ListDataSetsRequest * const q);
    ListDataSetsRequestPrivate(const ListDataSetsRequestPrivate &other,
                                   ListDataSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDataSetsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
