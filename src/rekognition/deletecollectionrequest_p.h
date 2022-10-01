// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOLLECTIONREQUEST_P_H
#define QTAWS_DELETECOLLECTIONREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "deletecollectionrequest.h"

namespace QtAws {
namespace Rekognition {

class DeleteCollectionRequest;

class DeleteCollectionRequestPrivate : public RekognitionRequestPrivate {

public:
    DeleteCollectionRequestPrivate(const RekognitionRequest::Action action,
                                   DeleteCollectionRequest * const q);
    DeleteCollectionRequestPrivate(const DeleteCollectionRequestPrivate &other,
                                   DeleteCollectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCollectionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
