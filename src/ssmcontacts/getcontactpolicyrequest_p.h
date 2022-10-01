// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTPOLICYREQUEST_P_H
#define QTAWS_GETCONTACTPOLICYREQUEST_P_H

#include "ssmcontactsrequest_p.h"
#include "getcontactpolicyrequest.h"

namespace QtAws {
namespace SsmContacts {

class GetContactPolicyRequest;

class GetContactPolicyRequestPrivate : public SsmContactsRequestPrivate {

public:
    GetContactPolicyRequestPrivate(const SsmContactsRequest::Action action,
                                   GetContactPolicyRequest * const q);
    GetContactPolicyRequestPrivate(const GetContactPolicyRequestPrivate &other,
                                   GetContactPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContactPolicyRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
