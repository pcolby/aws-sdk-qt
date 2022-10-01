// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICESPECIFICCREDENTIALREQUEST_P_H
#define QTAWS_UPDATESERVICESPECIFICCREDENTIALREQUEST_P_H

#include "iamrequest_p.h"
#include "updateservicespecificcredentialrequest.h"

namespace QtAws {
namespace Iam {

class UpdateServiceSpecificCredentialRequest;

class UpdateServiceSpecificCredentialRequestPrivate : public IamRequestPrivate {

public:
    UpdateServiceSpecificCredentialRequestPrivate(const IamRequest::Action action,
                                   UpdateServiceSpecificCredentialRequest * const q);
    UpdateServiceSpecificCredentialRequestPrivate(const UpdateServiceSpecificCredentialRequestPrivate &other,
                                   UpdateServiceSpecificCredentialRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateServiceSpecificCredentialRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
