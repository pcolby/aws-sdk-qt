// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEDULEREQUEST_P_H
#define QTAWS_CREATESCHEDULEREQUEST_P_H

#include "databrewrequest_p.h"
#include "createschedulerequest.h"

namespace QtAws {
namespace DataBrew {

class CreateScheduleRequest;

class CreateScheduleRequestPrivate : public DataBrewRequestPrivate {

public:
    CreateScheduleRequestPrivate(const DataBrewRequest::Action action,
                                   CreateScheduleRequest * const q);
    CreateScheduleRequestPrivate(const CreateScheduleRequestPrivate &other,
                                   CreateScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateScheduleRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
