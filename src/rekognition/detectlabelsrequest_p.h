// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTLABELSREQUEST_P_H
#define QTAWS_DETECTLABELSREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "detectlabelsrequest.h"

namespace QtAws {
namespace Rekognition {

class DetectLabelsRequest;

class DetectLabelsRequestPrivate : public RekognitionRequestPrivate {

public:
    DetectLabelsRequestPrivate(const RekognitionRequest::Action action,
                                   DetectLabelsRequest * const q);
    DetectLabelsRequestPrivate(const DetectLabelsRequestPrivate &other,
                                   DetectLabelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetectLabelsRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
