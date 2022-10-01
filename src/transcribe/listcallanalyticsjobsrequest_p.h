// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCALLANALYTICSJOBSREQUEST_P_H
#define QTAWS_LISTCALLANALYTICSJOBSREQUEST_P_H

#include "transcriberequest_p.h"
#include "listcallanalyticsjobsrequest.h"

namespace QtAws {
namespace Transcribe {

class ListCallAnalyticsJobsRequest;

class ListCallAnalyticsJobsRequestPrivate : public TranscribeRequestPrivate {

public:
    ListCallAnalyticsJobsRequestPrivate(const TranscribeRequest::Action action,
                                   ListCallAnalyticsJobsRequest * const q);
    ListCallAnalyticsJobsRequestPrivate(const ListCallAnalyticsJobsRequestPrivate &other,
                                   ListCallAnalyticsJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCallAnalyticsJobsRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
