// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIMULATEPRINCIPALPOLICYRESPONSE_P_H
#define QTAWS_SIMULATEPRINCIPALPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class SimulatePrincipalPolicyResponse;

class SimulatePrincipalPolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit SimulatePrincipalPolicyResponsePrivate(SimulatePrincipalPolicyResponse * const q);

    void parseSimulatePrincipalPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SimulatePrincipalPolicyResponse)
    Q_DISABLE_COPY(SimulatePrincipalPolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
