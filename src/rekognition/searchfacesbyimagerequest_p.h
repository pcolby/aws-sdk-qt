// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHFACESBYIMAGEREQUEST_P_H
#define QTAWS_SEARCHFACESBYIMAGEREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "searchfacesbyimagerequest.h"

namespace QtAws {
namespace Rekognition {

class SearchFacesByImageRequest;

class SearchFacesByImageRequestPrivate : public RekognitionRequestPrivate {

public:
    SearchFacesByImageRequestPrivate(const RekognitionRequest::Action action,
                                   SearchFacesByImageRequest * const q);
    SearchFacesByImageRequestPrivate(const SearchFacesByImageRequestPrivate &other,
                                   SearchFacesByImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchFacesByImageRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
