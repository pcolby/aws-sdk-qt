// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEARTIFACTREQUEST_P_H
#define QTAWS_CREATEARTIFACTREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createartifactrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateArtifactRequest;

class CreateArtifactRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateArtifactRequestPrivate(const SageMakerRequest::Action action,
                                   CreateArtifactRequest * const q);
    CreateArtifactRequestPrivate(const CreateArtifactRequestPrivate &other,
                                   CreateArtifactRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateArtifactRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
