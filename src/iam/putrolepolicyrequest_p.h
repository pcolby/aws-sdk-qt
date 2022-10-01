// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTROLEPOLICYREQUEST_P_H
#define QTAWS_PUTROLEPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "putrolepolicyrequest.h"

namespace QtAws {
namespace Iam {

class PutRolePolicyRequest;

class PutRolePolicyRequestPrivate : public IamRequestPrivate {

public:
    PutRolePolicyRequestPrivate(const IamRequest::Action action,
                                   PutRolePolicyRequest * const q);
    PutRolePolicyRequestPrivate(const PutRolePolicyRequestPrivate &other,
                                   PutRolePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRolePolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
