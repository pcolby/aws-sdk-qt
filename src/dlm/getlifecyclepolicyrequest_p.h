// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLIFECYCLEPOLICYREQUEST_P_H
#define QTAWS_GETLIFECYCLEPOLICYREQUEST_P_H

#include "dlmrequest_p.h"
#include "getlifecyclepolicyrequest.h"

namespace QtAws {
namespace Dlm {

class GetLifecyclePolicyRequest;

class GetLifecyclePolicyRequestPrivate : public DlmRequestPrivate {

public:
    GetLifecyclePolicyRequestPrivate(const DlmRequest::Action action,
                                   GetLifecyclePolicyRequest * const q);
    GetLifecyclePolicyRequestPrivate(const GetLifecyclePolicyRequestPrivate &other,
                                   GetLifecyclePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLifecyclePolicyRequest)

};

} // namespace Dlm
} // namespace QtAws

#endif
