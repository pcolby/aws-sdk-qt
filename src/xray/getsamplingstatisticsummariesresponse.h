// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLINGSTATISTICSUMMARIESRESPONSE_H
#define QTAWS_GETSAMPLINGSTATISTICSUMMARIESRESPONSE_H

#include "xrayresponse.h"
#include "getsamplingstatisticsummariesrequest.h"

namespace QtAws {
namespace XRay {

class GetSamplingStatisticSummariesResponsePrivate;

class QTAWSXRAY_EXPORT GetSamplingStatisticSummariesResponse : public XRayResponse {
    Q_OBJECT

public:
    GetSamplingStatisticSummariesResponse(const GetSamplingStatisticSummariesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSamplingStatisticSummariesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSamplingStatisticSummariesResponse)
    Q_DISABLE_COPY(GetSamplingStatisticSummariesResponse)

};

} // namespace XRay
} // namespace QtAws

#endif
