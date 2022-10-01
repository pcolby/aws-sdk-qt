// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOLLECTIONREQUEST_P_H
#define QTAWS_CREATECOLLECTIONREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "createcollectionrequest.h"

namespace QtAws {
namespace Rekognition {

class CreateCollectionRequest;

class CreateCollectionRequestPrivate : public RekognitionRequestPrivate {

public:
    CreateCollectionRequestPrivate(const RekognitionRequest::Action action,
                                   CreateCollectionRequest * const q);
    CreateCollectionRequestPrivate(const CreateCollectionRequestPrivate &other,
                                   CreateCollectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCollectionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
