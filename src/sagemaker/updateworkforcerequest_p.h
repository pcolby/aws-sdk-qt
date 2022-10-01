// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKFORCEREQUEST_P_H
#define QTAWS_UPDATEWORKFORCEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updateworkforcerequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateWorkforceRequest;

class UpdateWorkforceRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdateWorkforceRequestPrivate(const SageMakerRequest::Action action,
                                   UpdateWorkforceRequest * const q);
    UpdateWorkforceRequestPrivate(const UpdateWorkforceRequestPrivate &other,
                                   UpdateWorkforceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateWorkforceRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
