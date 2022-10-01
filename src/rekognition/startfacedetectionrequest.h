// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFACEDETECTIONREQUEST_H
#define QTAWS_STARTFACEDETECTIONREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class StartFaceDetectionRequestPrivate;

class QTAWSREKOGNITION_EXPORT StartFaceDetectionRequest : public RekognitionRequest {

public:
    StartFaceDetectionRequest(const StartFaceDetectionRequest &other);
    StartFaceDetectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartFaceDetectionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
