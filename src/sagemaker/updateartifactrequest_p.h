// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEARTIFACTREQUEST_P_H
#define QTAWS_UPDATEARTIFACTREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updateartifactrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateArtifactRequest;

class UpdateArtifactRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdateArtifactRequestPrivate(const SageMakerRequest::Action action,
                                   UpdateArtifactRequest * const q);
    UpdateArtifactRequestPrivate(const UpdateArtifactRequestPrivate &other,
                                   UpdateArtifactRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateArtifactRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
