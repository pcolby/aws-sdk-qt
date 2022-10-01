// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTMODERATIONLABELSREQUEST_P_H
#define QTAWS_DETECTMODERATIONLABELSREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "detectmoderationlabelsrequest.h"

namespace QtAws {
namespace Rekognition {

class DetectModerationLabelsRequest;

class DetectModerationLabelsRequestPrivate : public RekognitionRequestPrivate {

public:
    DetectModerationLabelsRequestPrivate(const RekognitionRequest::Action action,
                                   DetectModerationLabelsRequest * const q);
    DetectModerationLabelsRequestPrivate(const DetectModerationLabelsRequestPrivate &other,
                                   DetectModerationLabelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetectModerationLabelsRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
