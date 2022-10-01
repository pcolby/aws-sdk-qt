// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTTEXTREQUEST_P_H
#define QTAWS_DETECTTEXTREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "detecttextrequest.h"

namespace QtAws {
namespace Rekognition {

class DetectTextRequest;

class DetectTextRequestPrivate : public RekognitionRequestPrivate {

public:
    DetectTextRequestPrivate(const RekognitionRequest::Action action,
                                   DetectTextRequest * const q);
    DetectTextRequestPrivate(const DetectTextRequestPrivate &other,
                                   DetectTextRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetectTextRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
