// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULEREQUEST_P_H
#define QTAWS_DELETESCHEDULEREQUEST_P_H

#include "databrewrequest_p.h"
#include "deleteschedulerequest.h"

namespace QtAws {
namespace DataBrew {

class DeleteScheduleRequest;

class DeleteScheduleRequestPrivate : public DataBrewRequestPrivate {

public:
    DeleteScheduleRequestPrivate(const DataBrewRequest::Action action,
                                   DeleteScheduleRequest * const q);
    DeleteScheduleRequestPrivate(const DeleteScheduleRequestPrivate &other,
                                   DeleteScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteScheduleRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
