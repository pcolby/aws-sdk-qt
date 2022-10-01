// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFACEDETECTIONREQUEST_P_H
#define QTAWS_STARTFACEDETECTIONREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "startfacedetectionrequest.h"

namespace QtAws {
namespace Rekognition {

class StartFaceDetectionRequest;

class StartFaceDetectionRequestPrivate : public RekognitionRequestPrivate {

public:
    StartFaceDetectionRequestPrivate(const RekognitionRequest::Action action,
                                   StartFaceDetectionRequest * const q);
    StartFaceDetectionRequestPrivate(const StartFaceDetectionRequestPrivate &other,
                                   StartFaceDetectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartFaceDetectionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
