// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTFACESREQUEST_P_H
#define QTAWS_DETECTFACESREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "detectfacesrequest.h"

namespace QtAws {
namespace Rekognition {

class DetectFacesRequest;

class DetectFacesRequestPrivate : public RekognitionRequestPrivate {

public:
    DetectFacesRequestPrivate(const RekognitionRequest::Action action,
                                   DetectFacesRequest * const q);
    DetectFacesRequestPrivate(const DetectFacesRequestPrivate &other,
                                   DetectFacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetectFacesRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
