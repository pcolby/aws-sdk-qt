// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTSUMMARIESRESPONSE_H
#define QTAWS_GETINSIGHTSUMMARIESRESPONSE_H

#include "xrayresponse.h"
#include "getinsightsummariesrequest.h"

namespace QtAws {
namespace XRay {

class GetInsightSummariesResponsePrivate;

class QTAWSXRAY_EXPORT GetInsightSummariesResponse : public XRayResponse {
    Q_OBJECT

public:
    GetInsightSummariesResponse(const GetInsightSummariesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInsightSummariesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInsightSummariesResponse)
    Q_DISABLE_COPY(GetInsightSummariesResponse)

};

} // namespace XRay
} // namespace QtAws

#endif
