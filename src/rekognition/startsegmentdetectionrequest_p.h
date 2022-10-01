// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSEGMENTDETECTIONREQUEST_P_H
#define QTAWS_STARTSEGMENTDETECTIONREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "startsegmentdetectionrequest.h"

namespace QtAws {
namespace Rekognition {

class StartSegmentDetectionRequest;

class StartSegmentDetectionRequestPrivate : public RekognitionRequestPrivate {

public:
    StartSegmentDetectionRequestPrivate(const RekognitionRequest::Action action,
                                   StartSegmentDetectionRequest * const q);
    StartSegmentDetectionRequestPrivate(const StartSegmentDetectionRequestPrivate &other,
                                   StartSegmentDetectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartSegmentDetectionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
