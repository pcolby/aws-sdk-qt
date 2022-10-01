// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGEREQUEST_P_H
#define QTAWS_CREATEIMAGEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createimagerequest.h"

namespace QtAws {
namespace SageMaker {

class CreateImageRequest;

class CreateImageRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateImageRequestPrivate(const SageMakerRequest::Action action,
                                   CreateImageRequest * const q);
    CreateImageRequestPrivate(const CreateImageRequestPrivate &other,
                                   CreateImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateImageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
