// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTDETECTIONREQUEST_P_H
#define QTAWS_GETSEGMENTDETECTIONREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "getsegmentdetectionrequest.h"

namespace QtAws {
namespace Rekognition {

class GetSegmentDetectionRequest;

class GetSegmentDetectionRequestPrivate : public RekognitionRequestPrivate {

public:
    GetSegmentDetectionRequestPrivate(const RekognitionRequest::Action action,
                                   GetSegmentDetectionRequest * const q);
    GetSegmentDetectionRequestPrivate(const GetSegmentDetectionRequestPrivate &other,
                                   GetSegmentDetectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSegmentDetectionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
