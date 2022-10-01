// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREALTIMECONTACTANALYSISSEGMENTSRESPONSE_H
#define QTAWS_LISTREALTIMECONTACTANALYSISSEGMENTSRESPONSE_H

#include "connectcontactlensresponse.h"
#include "listrealtimecontactanalysissegmentsrequest.h"

namespace QtAws {
namespace ConnectContactLens {

class ListRealtimeContactAnalysisSegmentsResponsePrivate;

class QTAWSCONNECTCONTACTLENS_EXPORT ListRealtimeContactAnalysisSegmentsResponse : public ConnectContactLensResponse {
    Q_OBJECT

public:
    ListRealtimeContactAnalysisSegmentsResponse(const ListRealtimeContactAnalysisSegmentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRealtimeContactAnalysisSegmentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRealtimeContactAnalysisSegmentsResponse)
    Q_DISABLE_COPY(ListRealtimeContactAnalysisSegmentsResponse)

};

} // namespace ConnectContactLens
} // namespace QtAws

#endif
