// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMINANTLANGUAGEDETECTIONJOBSREQUEST_P_H
#define QTAWS_LISTDOMINANTLANGUAGEDETECTIONJOBSREQUEST_P_H

#include "comprehendrequest_p.h"
#include "listdominantlanguagedetectionjobsrequest.h"

namespace QtAws {
namespace Comprehend {

class ListDominantLanguageDetectionJobsRequest;

class ListDominantLanguageDetectionJobsRequestPrivate : public ComprehendRequestPrivate {

public:
    ListDominantLanguageDetectionJobsRequestPrivate(const ComprehendRequest::Action action,
                                   ListDominantLanguageDetectionJobsRequest * const q);
    ListDominantLanguageDetectionJobsRequestPrivate(const ListDominantLanguageDetectionJobsRequestPrivate &other,
                                   ListDominantLanguageDetectionJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDominantLanguageDetectionJobsRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
