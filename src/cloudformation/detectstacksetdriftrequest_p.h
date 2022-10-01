// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTSTACKSETDRIFTREQUEST_P_H
#define QTAWS_DETECTSTACKSETDRIFTREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "detectstacksetdriftrequest.h"

namespace QtAws {
namespace CloudFormation {

class DetectStackSetDriftRequest;

class DetectStackSetDriftRequestPrivate : public CloudFormationRequestPrivate {

public:
    DetectStackSetDriftRequestPrivate(const CloudFormationRequest::Action action,
                                   DetectStackSetDriftRequest * const q);
    DetectStackSetDriftRequestPrivate(const DetectStackSetDriftRequestPrivate &other,
                                   DetectStackSetDriftRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetectStackSetDriftRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
