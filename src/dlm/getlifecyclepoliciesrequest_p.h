// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLIFECYCLEPOLICIESREQUEST_P_H
#define QTAWS_GETLIFECYCLEPOLICIESREQUEST_P_H

#include "dlmrequest_p.h"
#include "getlifecyclepoliciesrequest.h"

namespace QtAws {
namespace Dlm {

class GetLifecyclePoliciesRequest;

class GetLifecyclePoliciesRequestPrivate : public DlmRequestPrivate {

public:
    GetLifecyclePoliciesRequestPrivate(const DlmRequest::Action action,
                                   GetLifecyclePoliciesRequest * const q);
    GetLifecyclePoliciesRequestPrivate(const GetLifecyclePoliciesRequestPrivate &other,
                                   GetLifecyclePoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLifecyclePoliciesRequest)

};

} // namespace Dlm
} // namespace QtAws

#endif
