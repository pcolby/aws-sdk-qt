// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYPOLICIESREQUEST_P_H
#define QTAWS_LISTKEYPOLICIESREQUEST_P_H

#include "kmsrequest_p.h"
#include "listkeypoliciesrequest.h"

namespace QtAws {
namespace Kms {

class ListKeyPoliciesRequest;

class ListKeyPoliciesRequestPrivate : public KmsRequestPrivate {

public:
    ListKeyPoliciesRequestPrivate(const KmsRequest::Action action,
                                   ListKeyPoliciesRequest * const q);
    ListKeyPoliciesRequestPrivate(const ListKeyPoliciesRequestPrivate &other,
                                   ListKeyPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListKeyPoliciesRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
