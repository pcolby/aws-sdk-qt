// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTEXTDETECTIONREQUEST_P_H
#define QTAWS_STARTTEXTDETECTIONREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "starttextdetectionrequest.h"

namespace QtAws {
namespace Rekognition {

class StartTextDetectionRequest;

class StartTextDetectionRequestPrivate : public RekognitionRequestPrivate {

public:
    StartTextDetectionRequestPrivate(const RekognitionRequest::Action action,
                                   StartTextDetectionRequest * const q);
    StartTextDetectionRequestPrivate(const StartTextDetectionRequestPrivate &other,
                                   StartTextDetectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartTextDetectionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
