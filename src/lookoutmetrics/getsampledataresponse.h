// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLEDATARESPONSE_H
#define QTAWS_GETSAMPLEDATARESPONSE_H

#include "lookoutmetricsresponse.h"
#include "getsampledatarequest.h"

namespace QtAws {
namespace LookoutMetrics {

class GetSampleDataResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT GetSampleDataResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    GetSampleDataResponse(const GetSampleDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSampleDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSampleDataResponse)
    Q_DISABLE_COPY(GetSampleDataResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
