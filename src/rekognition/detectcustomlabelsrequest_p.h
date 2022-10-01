// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTCUSTOMLABELSREQUEST_P_H
#define QTAWS_DETECTCUSTOMLABELSREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "detectcustomlabelsrequest.h"

namespace QtAws {
namespace Rekognition {

class DetectCustomLabelsRequest;

class DetectCustomLabelsRequestPrivate : public RekognitionRequestPrivate {

public:
    DetectCustomLabelsRequestPrivate(const RekognitionRequest::Action action,
                                   DetectCustomLabelsRequest * const q);
    DetectCustomLabelsRequestPrivate(const DetectCustomLabelsRequestPrivate &other,
                                   DetectCustomLabelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetectCustomLabelsRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
