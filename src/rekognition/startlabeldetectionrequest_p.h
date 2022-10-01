// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTLABELDETECTIONREQUEST_P_H
#define QTAWS_STARTLABELDETECTIONREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "startlabeldetectionrequest.h"

namespace QtAws {
namespace Rekognition {

class StartLabelDetectionRequest;

class StartLabelDetectionRequestPrivate : public RekognitionRequestPrivate {

public:
    StartLabelDetectionRequestPrivate(const RekognitionRequest::Action action,
                                   StartLabelDetectionRequest * const q);
    StartLabelDetectionRequestPrivate(const StartLabelDetectionRequestPrivate &other,
                                   StartLabelDetectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartLabelDetectionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
