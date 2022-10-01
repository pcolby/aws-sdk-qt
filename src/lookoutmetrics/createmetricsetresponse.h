// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMETRICSETRESPONSE_H
#define QTAWS_CREATEMETRICSETRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "createmetricsetrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class CreateMetricSetResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT CreateMetricSetResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    CreateMetricSetResponse(const CreateMetricSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMetricSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMetricSetResponse)
    Q_DISABLE_COPY(CreateMetricSetResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
