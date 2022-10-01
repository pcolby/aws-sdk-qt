// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPAREFACESREQUEST_P_H
#define QTAWS_COMPAREFACESREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "comparefacesrequest.h"

namespace QtAws {
namespace Rekognition {

class CompareFacesRequest;

class CompareFacesRequestPrivate : public RekognitionRequestPrivate {

public:
    CompareFacesRequestPrivate(const RekognitionRequest::Action action,
                                   CompareFacesRequest * const q);
    CompareFacesRequestPrivate(const CompareFacesRequestPrivate &other,
                                   CompareFacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(CompareFacesRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
