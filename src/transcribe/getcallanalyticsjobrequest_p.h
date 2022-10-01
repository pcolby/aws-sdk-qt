// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCALLANALYTICSJOBREQUEST_P_H
#define QTAWS_GETCALLANALYTICSJOBREQUEST_P_H

#include "transcriberequest_p.h"
#include "getcallanalyticsjobrequest.h"

namespace QtAws {
namespace Transcribe {

class GetCallAnalyticsJobRequest;

class GetCallAnalyticsJobRequestPrivate : public TranscribeRequestPrivate {

public:
    GetCallAnalyticsJobRequestPrivate(const TranscribeRequest::Action action,
                                   GetCallAnalyticsJobRequest * const q);
    GetCallAnalyticsJobRequestPrivate(const GetCallAnalyticsJobRequestPrivate &other,
                                   GetCallAnalyticsJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCallAnalyticsJobRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
