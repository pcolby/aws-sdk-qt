// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANOMALYGROUPTIMESERIESREQUEST_H
#define QTAWS_LISTANOMALYGROUPTIMESERIESREQUEST_H

#include "lookoutmetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class ListAnomalyGroupTimeSeriesRequestPrivate;

class QTAWSLOOKOUTMETRICS_EXPORT ListAnomalyGroupTimeSeriesRequest : public LookoutMetricsRequest {

public:
    ListAnomalyGroupTimeSeriesRequest(const ListAnomalyGroupTimeSeriesRequest &other);
    ListAnomalyGroupTimeSeriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAnomalyGroupTimeSeriesRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
