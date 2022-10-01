// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BACKTESTANOMALYDETECTORREQUEST_H
#define QTAWS_BACKTESTANOMALYDETECTORREQUEST_H

#include "lookoutmetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class BackTestAnomalyDetectorRequestPrivate;

class QTAWSLOOKOUTMETRICS_EXPORT BackTestAnomalyDetectorRequest : public LookoutMetricsRequest {

public:
    BackTestAnomalyDetectorRequest(const BackTestAnomalyDetectorRequest &other);
    BackTestAnomalyDetectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BackTestAnomalyDetectorRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
