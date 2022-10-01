// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEANOMALYDETECTORREQUEST_H
#define QTAWS_CREATEANOMALYDETECTORREQUEST_H

#include "lookoutmetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class CreateAnomalyDetectorRequestPrivate;

class QTAWSLOOKOUTMETRICS_EXPORT CreateAnomalyDetectorRequest : public LookoutMetricsRequest {

public:
    CreateAnomalyDetectorRequest(const CreateAnomalyDetectorRequest &other);
    CreateAnomalyDetectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAnomalyDetectorRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
