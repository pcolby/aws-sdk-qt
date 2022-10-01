// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGEVERSIONREQUEST_P_H
#define QTAWS_CREATEIMAGEVERSIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createimageversionrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateImageVersionRequest;

class CreateImageVersionRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateImageVersionRequestPrivate(const SageMakerRequest::Action action,
                                   CreateImageVersionRequest * const q);
    CreateImageVersionRequestPrivate(const CreateImageVersionRequestPrivate &other,
                                   CreateImageVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateImageVersionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
