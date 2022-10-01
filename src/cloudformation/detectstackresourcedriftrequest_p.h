// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTSTACKRESOURCEDRIFTREQUEST_P_H
#define QTAWS_DETECTSTACKRESOURCEDRIFTREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "detectstackresourcedriftrequest.h"

namespace QtAws {
namespace CloudFormation {

class DetectStackResourceDriftRequest;

class DetectStackResourceDriftRequestPrivate : public CloudFormationRequestPrivate {

public:
    DetectStackResourceDriftRequestPrivate(const CloudFormationRequest::Action action,
                                   DetectStackResourceDriftRequest * const q);
    DetectStackResourceDriftRequestPrivate(const DetectStackResourceDriftRequestPrivate &other,
                                   DetectStackResourceDriftRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetectStackResourceDriftRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
