// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPIMAGECONFIGREQUEST_P_H
#define QTAWS_CREATEAPPIMAGECONFIGREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createappimageconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateAppImageConfigRequest;

class CreateAppImageConfigRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateAppImageConfigRequestPrivate(const SageMakerRequest::Action action,
                                   CreateAppImageConfigRequest * const q);
    CreateAppImageConfigRequestPrivate(const CreateAppImageConfigRequestPrivate &other,
                                   CreateAppImageConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAppImageConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
