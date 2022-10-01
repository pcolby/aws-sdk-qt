// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFACEDETECTIONRESPONSE_H
#define QTAWS_GETFACEDETECTIONRESPONSE_H

#include "rekognitionresponse.h"
#include "getfacedetectionrequest.h"

namespace QtAws {
namespace Rekognition {

class GetFaceDetectionResponsePrivate;

class QTAWSREKOGNITION_EXPORT GetFaceDetectionResponse : public RekognitionResponse {
    Q_OBJECT

public:
    GetFaceDetectionResponse(const GetFaceDetectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFaceDetectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFaceDetectionResponse)
    Q_DISABLE_COPY(GetFaceDetectionResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
