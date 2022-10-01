// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPENDINGAGGREGATIONREQUESTREQUEST_P_H
#define QTAWS_DELETEPENDINGAGGREGATIONREQUESTREQUEST_P_H

#include "configservicerequest_p.h"
#include "deletependingaggregationrequestrequest.h"

namespace QtAws {
namespace ConfigService {

class DeletePendingAggregationRequestRequest;

class DeletePendingAggregationRequestRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DeletePendingAggregationRequestRequestPrivate(const ConfigServiceRequest::Action action,
                                   DeletePendingAggregationRequestRequest * const q);
    DeletePendingAggregationRequestRequestPrivate(const DeletePendingAggregationRequestRequestPrivate &other,
                                   DeletePendingAggregationRequestRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePendingAggregationRequestRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
