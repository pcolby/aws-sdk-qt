// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONTACTPOLICYREQUEST_P_H
#define QTAWS_PUTCONTACTPOLICYREQUEST_P_H

#include "ssmcontactsrequest_p.h"
#include "putcontactpolicyrequest.h"

namespace QtAws {
namespace SsmContacts {

class PutContactPolicyRequest;

class PutContactPolicyRequestPrivate : public SsmContactsRequestPrivate {

public:
    PutContactPolicyRequestPrivate(const SsmContactsRequest::Action action,
                                   PutContactPolicyRequest * const q);
    PutContactPolicyRequestPrivate(const PutContactPolicyRequestPrivate &other,
                                   PutContactPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutContactPolicyRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
