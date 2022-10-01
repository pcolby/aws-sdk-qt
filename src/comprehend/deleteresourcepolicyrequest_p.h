// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCEPOLICYREQUEST_P_H
#define QTAWS_DELETERESOURCEPOLICYREQUEST_P_H

#include "comprehendrequest_p.h"
#include "deleteresourcepolicyrequest.h"

namespace QtAws {
namespace Comprehend {

class DeleteResourcePolicyRequest;

class DeleteResourcePolicyRequestPrivate : public ComprehendRequestPrivate {

public:
    DeleteResourcePolicyRequestPrivate(const ComprehendRequest::Action action,
                                   DeleteResourcePolicyRequest * const q);
    DeleteResourcePolicyRequestPrivate(const DeleteResourcePolicyRequestPrivate &other,
                                   DeleteResourcePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteResourcePolicyRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
