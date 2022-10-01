// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEANOMALYDETECTORREQUEST_H
#define QTAWS_DEACTIVATEANOMALYDETECTORREQUEST_H

#include "lookoutmetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class DeactivateAnomalyDetectorRequestPrivate;

class QTAWSLOOKOUTMETRICS_EXPORT DeactivateAnomalyDetectorRequest : public LookoutMetricsRequest {

public:
    DeactivateAnomalyDetectorRequest(const DeactivateAnomalyDetectorRequest &other);
    DeactivateAnomalyDetectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeactivateAnomalyDetectorRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
