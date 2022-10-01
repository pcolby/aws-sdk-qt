// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSTOPREQUEST_P_H
#define QTAWS_BATCHSTOPREQUEST_P_H

#include "medialiverequest_p.h"
#include "batchstoprequest.h"

namespace QtAws {
namespace MediaLive {

class BatchStopRequest;

class BatchStopRequestPrivate : public MediaLiveRequestPrivate {

public:
    BatchStopRequestPrivate(const MediaLiveRequest::Action action,
                                   BatchStopRequest * const q);
    BatchStopRequestPrivate(const BatchStopRequestPrivate &other,
                                   BatchStopRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchStopRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
