// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMETRICSETSREQUEST_H
#define QTAWS_LISTMETRICSETSREQUEST_H

#include "lookoutmetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class ListMetricSetsRequestPrivate;

class QTAWSLOOKOUTMETRICS_EXPORT ListMetricSetsRequest : public LookoutMetricsRequest {

public:
    ListMetricSetsRequest(const ListMetricSetsRequest &other);
    ListMetricSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMetricSetsRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
