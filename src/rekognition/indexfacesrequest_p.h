// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INDEXFACESREQUEST_P_H
#define QTAWS_INDEXFACESREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "indexfacesrequest.h"

namespace QtAws {
namespace Rekognition {

class IndexFacesRequest;

class IndexFacesRequestPrivate : public RekognitionRequestPrivate {

public:
    IndexFacesRequestPrivate(const RekognitionRequest::Action action,
                                   IndexFacesRequest * const q);
    IndexFacesRequestPrivate(const IndexFacesRequestPrivate &other,
                                   IndexFacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(IndexFacesRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
