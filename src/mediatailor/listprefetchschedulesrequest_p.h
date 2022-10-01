// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPREFETCHSCHEDULESREQUEST_P_H
#define QTAWS_LISTPREFETCHSCHEDULESREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "listprefetchschedulesrequest.h"

namespace QtAws {
namespace MediaTailor {

class ListPrefetchSchedulesRequest;

class ListPrefetchSchedulesRequestPrivate : public MediaTailorRequestPrivate {

public:
    ListPrefetchSchedulesRequestPrivate(const MediaTailorRequest::Action action,
                                   ListPrefetchSchedulesRequest * const q);
    ListPrefetchSchedulesRequestPrivate(const ListPrefetchSchedulesRequestPrivate &other,
                                   ListPrefetchSchedulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPrefetchSchedulesRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
