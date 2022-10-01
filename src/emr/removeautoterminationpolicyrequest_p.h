// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEAUTOTERMINATIONPOLICYREQUEST_P_H
#define QTAWS_REMOVEAUTOTERMINATIONPOLICYREQUEST_P_H

#include "emrrequest_p.h"
#include "removeautoterminationpolicyrequest.h"

namespace QtAws {
namespace Emr {

class RemoveAutoTerminationPolicyRequest;

class RemoveAutoTerminationPolicyRequestPrivate : public EmrRequestPrivate {

public:
    RemoveAutoTerminationPolicyRequestPrivate(const EmrRequest::Action action,
                                   RemoveAutoTerminationPolicyRequest * const q);
    RemoveAutoTerminationPolicyRequestPrivate(const RemoveAutoTerminationPolicyRequestPrivate &other,
                                   RemoveAutoTerminationPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveAutoTerminationPolicyRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
