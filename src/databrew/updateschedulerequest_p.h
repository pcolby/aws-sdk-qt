// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCHEDULEREQUEST_P_H
#define QTAWS_UPDATESCHEDULEREQUEST_P_H

#include "databrewrequest_p.h"
#include "updateschedulerequest.h"

namespace QtAws {
namespace DataBrew {

class UpdateScheduleRequest;

class UpdateScheduleRequestPrivate : public DataBrewRequestPrivate {

public:
    UpdateScheduleRequestPrivate(const DataBrewRequest::Action action,
                                   UpdateScheduleRequest * const q);
    UpdateScheduleRequestPrivate(const UpdateScheduleRequestPrivate &other,
                                   UpdateScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateScheduleRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
