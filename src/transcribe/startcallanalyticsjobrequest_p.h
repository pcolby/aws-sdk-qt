// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCALLANALYTICSJOBREQUEST_P_H
#define QTAWS_STARTCALLANALYTICSJOBREQUEST_P_H

#include "transcriberequest_p.h"
#include "startcallanalyticsjobrequest.h"

namespace QtAws {
namespace Transcribe {

class StartCallAnalyticsJobRequest;

class StartCallAnalyticsJobRequestPrivate : public TranscribeRequestPrivate {

public:
    StartCallAnalyticsJobRequestPrivate(const TranscribeRequest::Action action,
                                   StartCallAnalyticsJobRequest * const q);
    StartCallAnalyticsJobRequestPrivate(const StartCallAnalyticsJobRequestPrivate &other,
                                   StartCallAnalyticsJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartCallAnalyticsJobRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
