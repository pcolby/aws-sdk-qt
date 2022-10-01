// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANOMALYDETECTORSREQUEST_H
#define QTAWS_LISTANOMALYDETECTORSREQUEST_H

#include "lookoutmetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class ListAnomalyDetectorsRequestPrivate;

class QTAWSLOOKOUTMETRICS_EXPORT ListAnomalyDetectorsRequest : public LookoutMetricsRequest {

public:
    ListAnomalyDetectorsRequest(const ListAnomalyDetectorsRequest &other);
    ListAnomalyDetectorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAnomalyDetectorsRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
