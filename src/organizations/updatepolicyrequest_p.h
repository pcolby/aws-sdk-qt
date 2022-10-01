// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPOLICYREQUEST_P_H
#define QTAWS_UPDATEPOLICYREQUEST_P_H

#include "organizationsrequest_p.h"
#include "updatepolicyrequest.h"

namespace QtAws {
namespace Organizations {

class UpdatePolicyRequest;

class UpdatePolicyRequestPrivate : public OrganizationsRequestPrivate {

public:
    UpdatePolicyRequestPrivate(const OrganizationsRequest::Action action,
                                   UpdatePolicyRequest * const q);
    UpdatePolicyRequestPrivate(const UpdatePolicyRequestPrivate &other,
                                   UpdatePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePolicyRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
