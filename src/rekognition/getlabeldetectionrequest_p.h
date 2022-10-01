// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLABELDETECTIONREQUEST_P_H
#define QTAWS_GETLABELDETECTIONREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "getlabeldetectionrequest.h"

namespace QtAws {
namespace Rekognition {

class GetLabelDetectionRequest;

class GetLabelDetectionRequestPrivate : public RekognitionRequestPrivate {

public:
    GetLabelDetectionRequestPrivate(const RekognitionRequest::Action action,
                                   GetLabelDetectionRequest * const q);
    GetLabelDetectionRequestPrivate(const GetLabelDetectionRequestPrivate &other,
                                   GetLabelDetectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLabelDetectionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
