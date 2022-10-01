// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHEMESREQUEST_P_H
#define QTAWS_LISTTHEMESREQUEST_P_H

#include "quicksightrequest_p.h"
#include "listthemesrequest.h"

namespace QtAws {
namespace QuickSight {

class ListThemesRequest;

class ListThemesRequestPrivate : public QuickSightRequestPrivate {

public:
    ListThemesRequestPrivate(const QuickSightRequest::Action action,
                                   ListThemesRequest * const q);
    ListThemesRequestPrivate(const ListThemesRequestPrivate &other,
                                   ListThemesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListThemesRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
