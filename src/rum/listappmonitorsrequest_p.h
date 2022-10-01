// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPMONITORSREQUEST_P_H
#define QTAWS_LISTAPPMONITORSREQUEST_P_H

#include "rumrequest_p.h"
#include "listappmonitorsrequest.h"

namespace QtAws {
namespace Rum {

class ListAppMonitorsRequest;

class ListAppMonitorsRequestPrivate : public RumRequestPrivate {

public:
    ListAppMonitorsRequestPrivate(const RumRequest::Action action,
                                   ListAppMonitorsRequest * const q);
    ListAppMonitorsRequestPrivate(const ListAppMonitorsRequestPrivate &other,
                                   ListAppMonitorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAppMonitorsRequest)

};

} // namespace Rum
} // namespace QtAws

#endif
