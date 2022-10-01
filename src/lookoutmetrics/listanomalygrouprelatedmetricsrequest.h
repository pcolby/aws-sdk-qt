// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANOMALYGROUPRELATEDMETRICSREQUEST_H
#define QTAWS_LISTANOMALYGROUPRELATEDMETRICSREQUEST_H

#include "lookoutmetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class ListAnomalyGroupRelatedMetricsRequestPrivate;

class QTAWSLOOKOUTMETRICS_EXPORT ListAnomalyGroupRelatedMetricsRequest : public LookoutMetricsRequest {

public:
    ListAnomalyGroupRelatedMetricsRequest(const ListAnomalyGroupRelatedMetricsRequest &other);
    ListAnomalyGroupRelatedMetricsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAnomalyGroupRelatedMetricsRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
