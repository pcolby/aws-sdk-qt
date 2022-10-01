// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHEMEALIASESREQUEST_P_H
#define QTAWS_LISTTHEMEALIASESREQUEST_P_H

#include "quicksightrequest_p.h"
#include "listthemealiasesrequest.h"

namespace QtAws {
namespace QuickSight {

class ListThemeAliasesRequest;

class ListThemeAliasesRequestPrivate : public QuickSightRequestPrivate {

public:
    ListThemeAliasesRequestPrivate(const QuickSightRequest::Action action,
                                   ListThemeAliasesRequest * const q);
    ListThemeAliasesRequestPrivate(const ListThemeAliasesRequestPrivate &other,
                                   ListThemeAliasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListThemeAliasesRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
