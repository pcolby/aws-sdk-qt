// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYPHRASESDETECTIONJOBSREQUEST_P_H
#define QTAWS_LISTKEYPHRASESDETECTIONJOBSREQUEST_P_H

#include "comprehendrequest_p.h"
#include "listkeyphrasesdetectionjobsrequest.h"

namespace QtAws {
namespace Comprehend {

class ListKeyPhrasesDetectionJobsRequest;

class ListKeyPhrasesDetectionJobsRequestPrivate : public ComprehendRequestPrivate {

public:
    ListKeyPhrasesDetectionJobsRequestPrivate(const ComprehendRequest::Action action,
                                   ListKeyPhrasesDetectionJobsRequest * const q);
    ListKeyPhrasesDetectionJobsRequestPrivate(const ListKeyPhrasesDetectionJobsRequestPrivate &other,
                                   ListKeyPhrasesDetectionJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListKeyPhrasesDetectionJobsRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
