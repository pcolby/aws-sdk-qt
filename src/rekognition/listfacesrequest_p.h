// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFACESREQUEST_P_H
#define QTAWS_LISTFACESREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "listfacesrequest.h"

namespace QtAws {
namespace Rekognition {

class ListFacesRequest;

class ListFacesRequestPrivate : public RekognitionRequestPrivate {

public:
    ListFacesRequestPrivate(const RekognitionRequest::Action action,
                                   ListFacesRequest * const q);
    ListFacesRequestPrivate(const ListFacesRequestPrivate &other,
                                   ListFacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFacesRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
