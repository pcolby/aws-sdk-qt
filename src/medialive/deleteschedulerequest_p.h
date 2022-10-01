// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULEREQUEST_P_H
#define QTAWS_DELETESCHEDULEREQUEST_P_H

#include "medialiverequest_p.h"
#include "deleteschedulerequest.h"

namespace QtAws {
namespace MediaLive {

class DeleteScheduleRequest;

class DeleteScheduleRequestPrivate : public MediaLiveRequestPrivate {

public:
    DeleteScheduleRequestPrivate(const MediaLiveRequest::Action action,
                                   DeleteScheduleRequest * const q);
    DeleteScheduleRequestPrivate(const DeleteScheduleRequestPrivate &other,
                                   DeleteScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteScheduleRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
