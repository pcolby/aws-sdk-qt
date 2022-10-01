// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALGORITHMREQUEST_P_H
#define QTAWS_CREATEALGORITHMREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createalgorithmrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateAlgorithmRequest;

class CreateAlgorithmRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateAlgorithmRequestPrivate(const SageMakerRequest::Action action,
                                   CreateAlgorithmRequest * const q);
    CreateAlgorithmRequestPrivate(const CreateAlgorithmRequestPrivate &other,
                                   CreateAlgorithmRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAlgorithmRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
