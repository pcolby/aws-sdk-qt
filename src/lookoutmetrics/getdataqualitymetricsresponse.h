// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAQUALITYMETRICSRESPONSE_H
#define QTAWS_GETDATAQUALITYMETRICSRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "getdataqualitymetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class GetDataQualityMetricsResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT GetDataQualityMetricsResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    GetDataQualityMetricsResponse(const GetDataQualityMetricsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDataQualityMetricsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataQualityMetricsResponse)
    Q_DISABLE_COPY(GetDataQualityMetricsResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
