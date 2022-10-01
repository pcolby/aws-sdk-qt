// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDETECTORMODELANALYSISRESPONSE_H
#define QTAWS_STARTDETECTORMODELANALYSISRESPONSE_H

#include "ioteventsresponse.h"
#include "startdetectormodelanalysisrequest.h"

namespace QtAws {
namespace IoTEvents {

class StartDetectorModelAnalysisResponsePrivate;

class QTAWSIOTEVENTS_EXPORT StartDetectorModelAnalysisResponse : public IoTEventsResponse {
    Q_OBJECT

public:
    StartDetectorModelAnalysisResponse(const StartDetectorModelAnalysisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartDetectorModelAnalysisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDetectorModelAnalysisResponse)
    Q_DISABLE_COPY(StartDetectorModelAnalysisResponse)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
