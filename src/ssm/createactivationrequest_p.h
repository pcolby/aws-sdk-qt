// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACTIVATIONREQUEST_P_H
#define QTAWS_CREATEACTIVATIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "createactivationrequest.h"

namespace QtAws {
namespace Ssm {

class CreateActivationRequest;

class CreateActivationRequestPrivate : public SsmRequestPrivate {

public:
    CreateActivationRequestPrivate(const SsmRequest::Action action,
                                   CreateActivationRequest * const q);
    CreateActivationRequestPrivate(const CreateActivationRequestPrivate &other,
                                   CreateActivationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateActivationRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
