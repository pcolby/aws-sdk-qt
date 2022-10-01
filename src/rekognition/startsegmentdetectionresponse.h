// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSEGMENTDETECTIONRESPONSE_H
#define QTAWS_STARTSEGMENTDETECTIONRESPONSE_H

#include "rekognitionresponse.h"
#include "startsegmentdetectionrequest.h"

namespace QtAws {
namespace Rekognition {

class StartSegmentDetectionResponsePrivate;

class QTAWSREKOGNITION_EXPORT StartSegmentDetectionResponse : public RekognitionResponse {
    Q_OBJECT

public:
    StartSegmentDetectionResponse(const StartSegmentDetectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartSegmentDetectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSegmentDetectionResponse)
    Q_DISABLE_COPY(StartSegmentDetectionResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
