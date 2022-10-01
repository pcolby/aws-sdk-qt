// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACTIVATIONREQUEST_P_H
#define QTAWS_DELETEACTIVATIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "deleteactivationrequest.h"

namespace QtAws {
namespace Ssm {

class DeleteActivationRequest;

class DeleteActivationRequestPrivate : public SsmRequestPrivate {

public:
    DeleteActivationRequestPrivate(const SsmRequest::Action action,
                                   DeleteActivationRequest * const q);
    DeleteActivationRequestPrivate(const DeleteActivationRequestPrivate &other,
                                   DeleteActivationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteActivationRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
