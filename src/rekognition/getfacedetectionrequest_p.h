// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFACEDETECTIONREQUEST_P_H
#define QTAWS_GETFACEDETECTIONREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "getfacedetectionrequest.h"

namespace QtAws {
namespace Rekognition {

class GetFaceDetectionRequest;

class GetFaceDetectionRequestPrivate : public RekognitionRequestPrivate {

public:
    GetFaceDetectionRequestPrivate(const RekognitionRequest::Action action,
                                   GetFaceDetectionRequest * const q);
    GetFaceDetectionRequestPrivate(const GetFaceDetectionRequestPrivate &other,
                                   GetFaceDetectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFaceDetectionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
