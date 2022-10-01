// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTOTERMINATIONPOLICYREQUEST_P_H
#define QTAWS_GETAUTOTERMINATIONPOLICYREQUEST_P_H

#include "emrrequest_p.h"
#include "getautoterminationpolicyrequest.h"

namespace QtAws {
namespace Emr {

class GetAutoTerminationPolicyRequest;

class GetAutoTerminationPolicyRequestPrivate : public EmrRequestPrivate {

public:
    GetAutoTerminationPolicyRequestPrivate(const EmrRequest::Action action,
                                   GetAutoTerminationPolicyRequest * const q);
    GetAutoTerminationPolicyRequestPrivate(const GetAutoTerminationPolicyRequestPrivate &other,
                                   GetAutoTerminationPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAutoTerminationPolicyRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
