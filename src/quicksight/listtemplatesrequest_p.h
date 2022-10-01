// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEMPLATESREQUEST_P_H
#define QTAWS_LISTTEMPLATESREQUEST_P_H

#include "quicksightrequest_p.h"
#include "listtemplatesrequest.h"

namespace QtAws {
namespace QuickSight {

class ListTemplatesRequest;

class ListTemplatesRequestPrivate : public QuickSightRequestPrivate {

public:
    ListTemplatesRequestPrivate(const QuickSightRequest::Action action,
                                   ListTemplatesRequest * const q);
    ListTemplatesRequestPrivate(const ListTemplatesRequestPrivate &other,
                                   ListTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTemplatesRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
