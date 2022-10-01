// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFACEDETECTIONREQUEST_H
#define QTAWS_GETFACEDETECTIONREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class GetFaceDetectionRequestPrivate;

class QTAWSREKOGNITION_EXPORT GetFaceDetectionRequest : public RekognitionRequest {

public:
    GetFaceDetectionRequest(const GetFaceDetectionRequest &other);
    GetFaceDetectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFaceDetectionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
