// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEARTIFACTREQUEST_P_H
#define QTAWS_DELETEARTIFACTREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deleteartifactrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteArtifactRequest;

class DeleteArtifactRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteArtifactRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteArtifactRequest * const q);
    DeleteArtifactRequestPrivate(const DeleteArtifactRequestPrivate &other,
                                   DeleteArtifactRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteArtifactRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
