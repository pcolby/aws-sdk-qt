// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPERIMENTREQUEST_P_H
#define QTAWS_DELETEEXPERIMENTREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deleteexperimentrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteExperimentRequest;

class DeleteExperimentRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteExperimentRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteExperimentRequest * const q);
    DeleteExperimentRequestPrivate(const DeleteExperimentRequestPrivate &other,
                                   DeleteExperimentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteExperimentRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
