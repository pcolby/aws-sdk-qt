// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFACESEARCHREQUEST_P_H
#define QTAWS_STARTFACESEARCHREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "startfacesearchrequest.h"

namespace QtAws {
namespace Rekognition {

class StartFaceSearchRequest;

class StartFaceSearchRequestPrivate : public RekognitionRequestPrivate {

public:
    StartFaceSearchRequestPrivate(const RekognitionRequest::Action action,
                                   StartFaceSearchRequest * const q);
    StartFaceSearchRequestPrivate(const StartFaceSearchRequestPrivate &other,
                                   StartFaceSearchRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartFaceSearchRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
