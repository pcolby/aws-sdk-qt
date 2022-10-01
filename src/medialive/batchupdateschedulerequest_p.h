// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATESCHEDULEREQUEST_P_H
#define QTAWS_BATCHUPDATESCHEDULEREQUEST_P_H

#include "medialiverequest_p.h"
#include "batchupdateschedulerequest.h"

namespace QtAws {
namespace MediaLive {

class BatchUpdateScheduleRequest;

class BatchUpdateScheduleRequestPrivate : public MediaLiveRequestPrivate {

public:
    BatchUpdateScheduleRequestPrivate(const MediaLiveRequest::Action action,
                                   BatchUpdateScheduleRequest * const q);
    BatchUpdateScheduleRequestPrivate(const BatchUpdateScheduleRequestPrivate &other,
                                   BatchUpdateScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchUpdateScheduleRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
