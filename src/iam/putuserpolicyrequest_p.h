// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTUSERPOLICYREQUEST_P_H
#define QTAWS_PUTUSERPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "putuserpolicyrequest.h"

namespace QtAws {
namespace Iam {

class PutUserPolicyRequest;

class PutUserPolicyRequestPrivate : public IamRequestPrivate {

public:
    PutUserPolicyRequestPrivate(const IamRequest::Action action,
                                   PutUserPolicyRequest * const q);
    PutUserPolicyRequestPrivate(const PutUserPolicyRequestPrivate &other,
                                   PutUserPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutUserPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
