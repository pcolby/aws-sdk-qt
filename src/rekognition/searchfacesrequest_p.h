// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHFACESREQUEST_P_H
#define QTAWS_SEARCHFACESREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "searchfacesrequest.h"

namespace QtAws {
namespace Rekognition {

class SearchFacesRequest;

class SearchFacesRequestPrivate : public RekognitionRequestPrivate {

public:
    SearchFacesRequestPrivate(const RekognitionRequest::Action action,
                                   SearchFacesRequest * const q);
    SearchFacesRequestPrivate(const SearchFacesRequestPrivate &other,
                                   SearchFacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchFacesRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
