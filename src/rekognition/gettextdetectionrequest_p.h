// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEXTDETECTIONREQUEST_P_H
#define QTAWS_GETTEXTDETECTIONREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "gettextdetectionrequest.h"

namespace QtAws {
namespace Rekognition {

class GetTextDetectionRequest;

class GetTextDetectionRequestPrivate : public RekognitionRequestPrivate {

public:
    GetTextDetectionRequestPrivate(const RekognitionRequest::Action action,
                                   GetTextDetectionRequest * const q);
    GetTextDetectionRequestPrivate(const GetTextDetectionRequestPrivate &other,
                                   GetTextDetectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTextDetectionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
