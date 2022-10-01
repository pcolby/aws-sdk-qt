// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROBOTSREQUEST_P_H
#define QTAWS_LISTROBOTSREQUEST_P_H

#include "robomakerrequest_p.h"
#include "listrobotsrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListRobotsRequest;

class ListRobotsRequestPrivate : public RoboMakerRequestPrivate {

public:
    ListRobotsRequestPrivate(const RoboMakerRequest::Action action,
                                   ListRobotsRequest * const q);
    ListRobotsRequestPrivate(const ListRobotsRequestPrivate &other,
                                   ListRobotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRobotsRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
