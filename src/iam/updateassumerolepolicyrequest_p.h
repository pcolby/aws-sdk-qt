// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSUMEROLEPOLICYREQUEST_P_H
#define QTAWS_UPDATEASSUMEROLEPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "updateassumerolepolicyrequest.h"

namespace QtAws {
namespace Iam {

class UpdateAssumeRolePolicyRequest;

class UpdateAssumeRolePolicyRequestPrivate : public IamRequestPrivate {

public:
    UpdateAssumeRolePolicyRequestPrivate(const IamRequest::Action action,
                                   UpdateAssumeRolePolicyRequest * const q);
    UpdateAssumeRolePolicyRequestPrivate(const UpdateAssumeRolePolicyRequestPrivate &other,
                                   UpdateAssumeRolePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAssumeRolePolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
