// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEANOMALYDETECTORREQUEST_H
#define QTAWS_ACTIVATEANOMALYDETECTORREQUEST_H

#include "lookoutmetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class ActivateAnomalyDetectorRequestPrivate;

class QTAWSLOOKOUTMETRICS_EXPORT ActivateAnomalyDetectorRequest : public LookoutMetricsRequest {

public:
    ActivateAnomalyDetectorRequest(const ActivateAnomalyDetectorRequest &other);
    ActivateAnomalyDetectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ActivateAnomalyDetectorRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
