// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELIFECYCLEPOLICYREQUEST_P_H
#define QTAWS_UPDATELIFECYCLEPOLICYREQUEST_P_H

#include "dlmrequest_p.h"
#include "updatelifecyclepolicyrequest.h"

namespace QtAws {
namespace Dlm {

class UpdateLifecyclePolicyRequest;

class UpdateLifecyclePolicyRequestPrivate : public DlmRequestPrivate {

public:
    UpdateLifecyclePolicyRequestPrivate(const DlmRequest::Action action,
                                   UpdateLifecyclePolicyRequest * const q);
    UpdateLifecyclePolicyRequestPrivate(const UpdateLifecyclePolicyRequestPrivate &other,
                                   UpdateLifecyclePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLifecyclePolicyRequest)

};

} // namespace Dlm
} // namespace QtAws

#endif
