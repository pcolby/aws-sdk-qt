// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICESPECIFICCREDENTIALREQUEST_P_H
#define QTAWS_DELETESERVICESPECIFICCREDENTIALREQUEST_P_H

#include "iamrequest_p.h"
#include "deleteservicespecificcredentialrequest.h"

namespace QtAws {
namespace Iam {

class DeleteServiceSpecificCredentialRequest;

class DeleteServiceSpecificCredentialRequestPrivate : public IamRequestPrivate {

public:
    DeleteServiceSpecificCredentialRequestPrivate(const IamRequest::Action action,
                                   DeleteServiceSpecificCredentialRequest * const q);
    DeleteServiceSpecificCredentialRequestPrivate(const DeleteServiceSpecificCredentialRequestPrivate &other,
                                   DeleteServiceSpecificCredentialRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteServiceSpecificCredentialRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
