// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFACEDETECTIONRESPONSE_H
#define QTAWS_STARTFACEDETECTIONRESPONSE_H

#include "rekognitionresponse.h"
#include "startfacedetectionrequest.h"

namespace QtAws {
namespace Rekognition {

class StartFaceDetectionResponsePrivate;

class QTAWSREKOGNITION_EXPORT StartFaceDetectionResponse : public RekognitionResponse {
    Q_OBJECT

public:
    StartFaceDetectionResponse(const StartFaceDetectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartFaceDetectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartFaceDetectionResponse)
    Q_DISABLE_COPY(StartFaceDetectionResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
