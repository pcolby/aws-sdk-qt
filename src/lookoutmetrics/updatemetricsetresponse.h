// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMETRICSETRESPONSE_H
#define QTAWS_UPDATEMETRICSETRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "updatemetricsetrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class UpdateMetricSetResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT UpdateMetricSetResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    UpdateMetricSetResponse(const UpdateMetricSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMetricSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMetricSetResponse)
    Q_DISABLE_COPY(UpdateMetricSetResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
