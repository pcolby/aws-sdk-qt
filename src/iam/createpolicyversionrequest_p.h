// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPOLICYVERSIONREQUEST_P_H
#define QTAWS_CREATEPOLICYVERSIONREQUEST_P_H

#include "iamrequest_p.h"
#include "createpolicyversionrequest.h"

namespace QtAws {
namespace Iam {

class CreatePolicyVersionRequest;

class CreatePolicyVersionRequestPrivate : public IamRequestPrivate {

public:
    CreatePolicyVersionRequestPrivate(const IamRequest::Action action,
                                   CreatePolicyVersionRequest * const q);
    CreatePolicyVersionRequestPrivate(const CreatePolicyVersionRequestPrivate &other,
                                   CreatePolicyVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePolicyVersionRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
