// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECALLANALYTICSJOBREQUEST_P_H
#define QTAWS_DELETECALLANALYTICSJOBREQUEST_P_H

#include "transcriberequest_p.h"
#include "deletecallanalyticsjobrequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteCallAnalyticsJobRequest;

class DeleteCallAnalyticsJobRequestPrivate : public TranscribeRequestPrivate {

public:
    DeleteCallAnalyticsJobRequestPrivate(const TranscribeRequest::Action action,
                                   DeleteCallAnalyticsJobRequest * const q);
    DeleteCallAnalyticsJobRequestPrivate(const DeleteCallAnalyticsJobRequestPrivate &other,
                                   DeleteCallAnalyticsJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCallAnalyticsJobRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
