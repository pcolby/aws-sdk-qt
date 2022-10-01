// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLABELINGJOBSFORWORKTEAMREQUEST_P_H
#define QTAWS_LISTLABELINGJOBSFORWORKTEAMREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listlabelingjobsforworkteamrequest.h"

namespace QtAws {
namespace SageMaker {

class ListLabelingJobsForWorkteamRequest;

class ListLabelingJobsForWorkteamRequestPrivate : public SageMakerRequestPrivate {

public:
    ListLabelingJobsForWorkteamRequestPrivate(const SageMakerRequest::Action action,
                                   ListLabelingJobsForWorkteamRequest * const q);
    ListLabelingJobsForWorkteamRequestPrivate(const ListLabelingJobsForWorkteamRequestPrivate &other,
                                   ListLabelingJobsForWorkteamRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLabelingJobsForWorkteamRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
