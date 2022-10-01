// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTEXTDETECTIONREQUEST_H
#define QTAWS_STARTTEXTDETECTIONREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class StartTextDetectionRequestPrivate;

class QTAWSREKOGNITION_EXPORT StartTextDetectionRequest : public RekognitionRequest {

public:
    StartTextDetectionRequest(const StartTextDetectionRequest &other);
    StartTextDetectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartTextDetectionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
