// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANOMALYDETECTORREQUEST_H
#define QTAWS_UPDATEANOMALYDETECTORREQUEST_H

#include "lookoutmetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class UpdateAnomalyDetectorRequestPrivate;

class QTAWSLOOKOUTMETRICS_EXPORT UpdateAnomalyDetectorRequest : public LookoutMetricsRequest {

public:
    UpdateAnomalyDetectorRequest(const UpdateAnomalyDetectorRequest &other);
    UpdateAnomalyDetectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAnomalyDetectorRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
