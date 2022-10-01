// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTSTACKDRIFTREQUEST_P_H
#define QTAWS_DETECTSTACKDRIFTREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "detectstackdriftrequest.h"

namespace QtAws {
namespace CloudFormation {

class DetectStackDriftRequest;

class DetectStackDriftRequestPrivate : public CloudFormationRequestPrivate {

public:
    DetectStackDriftRequestPrivate(const CloudFormationRequest::Action action,
                                   DetectStackDriftRequest * const q);
    DetectStackDriftRequestPrivate(const DetectStackDriftRequestPrivate &other,
                                   DetectStackDriftRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetectStackDriftRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
