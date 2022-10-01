// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIMULATECUSTOMPOLICYREQUEST_P_H
#define QTAWS_SIMULATECUSTOMPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "simulatecustompolicyrequest.h"

namespace QtAws {
namespace Iam {

class SimulateCustomPolicyRequest;

class SimulateCustomPolicyRequestPrivate : public IamRequestPrivate {

public:
    SimulateCustomPolicyRequestPrivate(const IamRequest::Action action,
                                   SimulateCustomPolicyRequest * const q);
    SimulateCustomPolicyRequestPrivate(const SimulateCustomPolicyRequestPrivate &other,
                                   SimulateCustomPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(SimulateCustomPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
