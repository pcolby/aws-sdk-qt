// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMONITORINGSCHEDULESREQUEST_P_H
#define QTAWS_LISTMONITORINGSCHEDULESREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listmonitoringschedulesrequest.h"

namespace QtAws {
namespace SageMaker {

class ListMonitoringSchedulesRequest;

class ListMonitoringSchedulesRequestPrivate : public SageMakerRequestPrivate {

public:
    ListMonitoringSchedulesRequestPrivate(const SageMakerRequest::Action action,
                                   ListMonitoringSchedulesRequest * const q);
    ListMonitoringSchedulesRequestPrivate(const ListMonitoringSchedulesRequestPrivate &other,
                                   ListMonitoringSchedulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMonitoringSchedulesRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
