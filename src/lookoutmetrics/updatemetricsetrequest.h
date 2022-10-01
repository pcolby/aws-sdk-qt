// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMETRICSETREQUEST_H
#define QTAWS_UPDATEMETRICSETREQUEST_H

#include "lookoutmetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class UpdateMetricSetRequestPrivate;

class QTAWSLOOKOUTMETRICS_EXPORT UpdateMetricSetRequest : public LookoutMetricsRequest {

public:
    UpdateMetricSetRequest(const UpdateMetricSetRequest &other);
    UpdateMetricSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMetricSetRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
