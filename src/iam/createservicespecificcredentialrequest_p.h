// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICESPECIFICCREDENTIALREQUEST_P_H
#define QTAWS_CREATESERVICESPECIFICCREDENTIALREQUEST_P_H

#include "iamrequest_p.h"
#include "createservicespecificcredentialrequest.h"

namespace QtAws {
namespace Iam {

class CreateServiceSpecificCredentialRequest;

class CreateServiceSpecificCredentialRequestPrivate : public IamRequestPrivate {

public:
    CreateServiceSpecificCredentialRequestPrivate(const IamRequest::Action action,
                                   CreateServiceSpecificCredentialRequest * const q);
    CreateServiceSpecificCredentialRequestPrivate(const CreateServiceSpecificCredentialRequestPrivate &other,
                                   CreateServiceSpecificCredentialRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateServiceSpecificCredentialRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
