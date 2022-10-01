// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENABLEDCONTROLSREQUEST_P_H
#define QTAWS_LISTENABLEDCONTROLSREQUEST_P_H

#include "controltowerrequest_p.h"
#include "listenabledcontrolsrequest.h"

namespace QtAws {
namespace ControlTower {

class ListEnabledControlsRequest;

class ListEnabledControlsRequestPrivate : public ControlTowerRequestPrivate {

public:
    ListEnabledControlsRequestPrivate(const ControlTowerRequest::Action action,
                                   ListEnabledControlsRequest * const q);
    ListEnabledControlsRequestPrivate(const ListEnabledControlsRequestPrivate &other,
                                   ListEnabledControlsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEnabledControlsRequest)

};

} // namespace ControlTower
} // namespace QtAws

#endif
