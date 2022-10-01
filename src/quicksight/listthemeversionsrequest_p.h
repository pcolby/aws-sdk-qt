// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHEMEVERSIONSREQUEST_P_H
#define QTAWS_LISTTHEMEVERSIONSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "listthemeversionsrequest.h"

namespace QtAws {
namespace QuickSight {

class ListThemeVersionsRequest;

class ListThemeVersionsRequestPrivate : public QuickSightRequestPrivate {

public:
    ListThemeVersionsRequestPrivate(const QuickSightRequest::Action action,
                                   ListThemeVersionsRequest * const q);
    ListThemeVersionsRequestPrivate(const ListThemeVersionsRequestPrivate &other,
                                   ListThemeVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListThemeVersionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
