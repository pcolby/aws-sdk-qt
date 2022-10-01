// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNAMESPACESREQUEST_P_H
#define QTAWS_LISTNAMESPACESREQUEST_P_H

#include "quicksightrequest_p.h"
#include "listnamespacesrequest.h"

namespace QtAws {
namespace QuickSight {

class ListNamespacesRequest;

class ListNamespacesRequestPrivate : public QuickSightRequestPrivate {

public:
    ListNamespacesRequestPrivate(const QuickSightRequest::Action action,
                                   ListNamespacesRequest * const q);
    ListNamespacesRequestPrivate(const ListNamespacesRequestPrivate &other,
                                   ListNamespacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNamespacesRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
