// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSTARTREQUEST_P_H
#define QTAWS_BATCHSTARTREQUEST_P_H

#include "medialiverequest_p.h"
#include "batchstartrequest.h"

namespace QtAws {
namespace MediaLive {

class BatchStartRequest;

class BatchStartRequestPrivate : public MediaLiveRequestPrivate {

public:
    BatchStartRequestPrivate(const MediaLiveRequest::Action action,
                                   BatchStartRequest * const q);
    BatchStartRequestPrivate(const BatchStartRequestPrivate &other,
                                   BatchStartRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchStartRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
