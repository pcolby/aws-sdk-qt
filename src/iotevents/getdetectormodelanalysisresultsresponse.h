// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDETECTORMODELANALYSISRESULTSRESPONSE_H
#define QTAWS_GETDETECTORMODELANALYSISRESULTSRESPONSE_H

#include "ioteventsresponse.h"
#include "getdetectormodelanalysisresultsrequest.h"

namespace QtAws {
namespace IoTEvents {

class GetDetectorModelAnalysisResultsResponsePrivate;

class QTAWSIOTEVENTS_EXPORT GetDetectorModelAnalysisResultsResponse : public IoTEventsResponse {
    Q_OBJECT

public:
    GetDetectorModelAnalysisResultsResponse(const GetDetectorModelAnalysisResultsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDetectorModelAnalysisResultsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDetectorModelAnalysisResultsResponse)
    Q_DISABLE_COPY(GetDetectorModelAnalysisResultsResponse)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
