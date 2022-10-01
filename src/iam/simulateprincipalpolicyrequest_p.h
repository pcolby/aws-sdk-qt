// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIMULATEPRINCIPALPOLICYREQUEST_P_H
#define QTAWS_SIMULATEPRINCIPALPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "simulateprincipalpolicyrequest.h"

namespace QtAws {
namespace Iam {

class SimulatePrincipalPolicyRequest;

class SimulatePrincipalPolicyRequestPrivate : public IamRequestPrivate {

public:
    SimulatePrincipalPolicyRequestPrivate(const IamRequest::Action action,
                                   SimulatePrincipalPolicyRequest * const q);
    SimulatePrincipalPolicyRequestPrivate(const SimulatePrincipalPolicyRequestPrivate &other,
                                   SimulatePrincipalPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(SimulatePrincipalPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
