// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMILESTONESREQUEST_P_H
#define QTAWS_LISTMILESTONESREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "listmilestonesrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListMilestonesRequest;

class ListMilestonesRequestPrivate : public WellArchitectedRequestPrivate {

public:
    ListMilestonesRequestPrivate(const WellArchitectedRequest::Action action,
                                   ListMilestonesRequest * const q);
    ListMilestonesRequestPrivate(const ListMilestonesRequestPrivate &other,
                                   ListMilestonesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMilestonesRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
