// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELIFECYCLEPOLICYREQUEST_P_H
#define QTAWS_CREATELIFECYCLEPOLICYREQUEST_P_H

#include "dlmrequest_p.h"
#include "createlifecyclepolicyrequest.h"

namespace QtAws {
namespace Dlm {

class CreateLifecyclePolicyRequest;

class CreateLifecyclePolicyRequestPrivate : public DlmRequestPrivate {

public:
    CreateLifecyclePolicyRequestPrivate(const DlmRequest::Action action,
                                   CreateLifecyclePolicyRequest * const q);
    CreateLifecyclePolicyRequestPrivate(const CreateLifecyclePolicyRequestPrivate &other,
                                   CreateLifecyclePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLifecyclePolicyRequest)

};

} // namespace Dlm
} // namespace QtAws

#endif
