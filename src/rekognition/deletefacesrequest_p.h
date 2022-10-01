// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFACESREQUEST_P_H
#define QTAWS_DELETEFACESREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "deletefacesrequest.h"

namespace QtAws {
namespace Rekognition {

class DeleteFacesRequest;

class DeleteFacesRequestPrivate : public RekognitionRequestPrivate {

public:
    DeleteFacesRequestPrivate(const RekognitionRequest::Action action,
                                   DeleteFacesRequest * const q);
    DeleteFacesRequestPrivate(const DeleteFacesRequestPrivate &other,
                                   DeleteFacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFacesRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
