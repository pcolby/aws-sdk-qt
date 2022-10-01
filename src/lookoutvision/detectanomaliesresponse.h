// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTANOMALIESRESPONSE_H
#define QTAWS_DETECTANOMALIESRESPONSE_H

#include "lookoutvisionresponse.h"
#include "detectanomaliesrequest.h"

namespace QtAws {
namespace LookoutVision {

class DetectAnomaliesResponsePrivate;

class QTAWSLOOKOUTVISION_EXPORT DetectAnomaliesResponse : public LookoutVisionResponse {
    Q_OBJECT

public:
    DetectAnomaliesResponse(const DetectAnomaliesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetectAnomaliesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectAnomaliesResponse)
    Q_DISABLE_COPY(DetectAnomaliesResponse)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
