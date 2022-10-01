// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALGORITHMREQUEST_P_H
#define QTAWS_DELETEALGORITHMREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deletealgorithmrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteAlgorithmRequest;

class DeleteAlgorithmRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteAlgorithmRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteAlgorithmRequest * const q);
    DeleteAlgorithmRequestPrivate(const DeleteAlgorithmRequestPrivate &other,
                                   DeleteAlgorithmRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAlgorithmRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
