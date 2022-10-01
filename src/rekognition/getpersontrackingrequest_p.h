// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERSONTRACKINGREQUEST_P_H
#define QTAWS_GETPERSONTRACKINGREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "getpersontrackingrequest.h"

namespace QtAws {
namespace Rekognition {

class GetPersonTrackingRequest;

class GetPersonTrackingRequestPrivate : public RekognitionRequestPrivate {

public:
    GetPersonTrackingRequestPrivate(const RekognitionRequest::Action action,
                                   GetPersonTrackingRequest * const q);
    GetPersonTrackingRequestPrivate(const GetPersonTrackingRequestPrivate &other,
                                   GetPersonTrackingRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPersonTrackingRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
