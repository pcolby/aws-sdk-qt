// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROBOTAPPLICATIONSREQUEST_P_H
#define QTAWS_LISTROBOTAPPLICATIONSREQUEST_P_H

#include "robomakerrequest_p.h"
#include "listrobotapplicationsrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListRobotApplicationsRequest;

class ListRobotApplicationsRequestPrivate : public RoboMakerRequestPrivate {

public:
    ListRobotApplicationsRequestPrivate(const RoboMakerRequest::Action action,
                                   ListRobotApplicationsRequest * const q);
    ListRobotApplicationsRequestPrivate(const ListRobotApplicationsRequestPrivate &other,
                                   ListRobotApplicationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRobotApplicationsRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
