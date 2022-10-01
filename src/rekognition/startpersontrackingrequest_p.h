// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPERSONTRACKINGREQUEST_P_H
#define QTAWS_STARTPERSONTRACKINGREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "startpersontrackingrequest.h"

namespace QtAws {
namespace Rekognition {

class StartPersonTrackingRequest;

class StartPersonTrackingRequestPrivate : public RekognitionRequestPrivate {

public:
    StartPersonTrackingRequestPrivate(const RekognitionRequest::Action action,
                                   StartPersonTrackingRequest * const q);
    StartPersonTrackingRequestPrivate(const StartPersonTrackingRequestPrivate &other,
                                   StartPersonTrackingRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartPersonTrackingRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
