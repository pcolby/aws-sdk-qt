// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGROUPPOLICYREQUEST_P_H
#define QTAWS_DELETEGROUPPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "deletegrouppolicyrequest.h"

namespace QtAws {
namespace Iam {

class DeleteGroupPolicyRequest;

class DeleteGroupPolicyRequestPrivate : public IamRequestPrivate {

public:
    DeleteGroupPolicyRequestPrivate(const IamRequest::Action action,
                                   DeleteGroupPolicyRequest * const q);
    DeleteGroupPolicyRequestPrivate(const DeleteGroupPolicyRequestPrivate &other,
                                   DeleteGroupPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGroupPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
