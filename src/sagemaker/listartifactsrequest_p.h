// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTARTIFACTSREQUEST_P_H
#define QTAWS_LISTARTIFACTSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listartifactsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListArtifactsRequest;

class ListArtifactsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListArtifactsRequestPrivate(const SageMakerRequest::Action action,
                                   ListArtifactsRequest * const q);
    ListArtifactsRequestPrivate(const ListArtifactsRequestPrivate &other,
                                   ListArtifactsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListArtifactsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
