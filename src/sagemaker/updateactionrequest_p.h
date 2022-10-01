// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACTIONREQUEST_P_H
#define QTAWS_UPDATEACTIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updateactionrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateActionRequest;

class UpdateActionRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdateActionRequestPrivate(const SageMakerRequest::Action action,
                                   UpdateActionRequest * const q);
    UpdateActionRequestPrivate(const UpdateActionRequestPrivate &other,
                                   UpdateActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateActionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
