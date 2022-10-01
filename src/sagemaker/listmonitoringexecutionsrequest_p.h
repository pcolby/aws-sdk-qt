// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMONITORINGEXECUTIONSREQUEST_P_H
#define QTAWS_LISTMONITORINGEXECUTIONSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listmonitoringexecutionsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListMonitoringExecutionsRequest;

class ListMonitoringExecutionsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListMonitoringExecutionsRequestPrivate(const SageMakerRequest::Action action,
                                   ListMonitoringExecutionsRequest * const q);
    ListMonitoringExecutionsRequestPrivate(const ListMonitoringExecutionsRequestPrivate &other,
                                   ListMonitoringExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMonitoringExecutionsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
