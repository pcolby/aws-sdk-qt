// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTOMLJOBREQUEST_P_H
#define QTAWS_CREATEAUTOMLJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createautomljobrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateAutoMLJobRequest;

class CreateAutoMLJobRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateAutoMLJobRequestPrivate(const SageMakerRequest::Action action,
                                   CreateAutoMLJobRequest * const q);
    CreateAutoMLJobRequestPrivate(const CreateAutoMLJobRequestPrivate &other,
                                   CreateAutoMLJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAutoMLJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
