// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPOLICYREQUEST_P_H
#define QTAWS_CREATEPOLICYREQUEST_P_H

#include "organizationsrequest_p.h"
#include "createpolicyrequest.h"

namespace QtAws {
namespace Organizations {

class CreatePolicyRequest;

class CreatePolicyRequestPrivate : public OrganizationsRequestPrivate {

public:
    CreatePolicyRequestPrivate(const OrganizationsRequest::Action action,
                                   CreatePolicyRequest * const q);
    CreatePolicyRequestPrivate(const CreatePolicyRequestPrivate &other,
                                   CreatePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePolicyRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
