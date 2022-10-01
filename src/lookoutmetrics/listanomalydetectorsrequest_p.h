// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANOMALYDETECTORSREQUEST_P_H
#define QTAWS_LISTANOMALYDETECTORSREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "listanomalydetectorsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class ListAnomalyDetectorsRequest;

class ListAnomalyDetectorsRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    ListAnomalyDetectorsRequestPrivate(const LookoutMetricsRequest::Action action,
                                   ListAnomalyDetectorsRequest * const q);
    ListAnomalyDetectorsRequestPrivate(const ListAnomalyDetectorsRequestPrivate &other,
                                   ListAnomalyDetectorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAnomalyDetectorsRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
