// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFACESEARCHREQUEST_P_H
#define QTAWS_GETFACESEARCHREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "getfacesearchrequest.h"

namespace QtAws {
namespace Rekognition {

class GetFaceSearchRequest;

class GetFaceSearchRequestPrivate : public RekognitionRequestPrivate {

public:
    GetFaceSearchRequestPrivate(const RekognitionRequest::Action action,
                                   GetFaceSearchRequest * const q);
    GetFaceSearchRequestPrivate(const GetFaceSearchRequestPrivate &other,
                                   GetFaceSearchRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFaceSearchRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
