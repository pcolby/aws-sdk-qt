// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIMULATEPRINCIPALPOLICYRESPONSE_H
#define QTAWS_SIMULATEPRINCIPALPOLICYRESPONSE_H

#include "iamresponse.h"
#include "simulateprincipalpolicyrequest.h"

namespace QtAws {
namespace Iam {

class SimulatePrincipalPolicyResponsePrivate;

class QTAWSIAM_EXPORT SimulatePrincipalPolicyResponse : public IamResponse {
    Q_OBJECT

public:
    SimulatePrincipalPolicyResponse(const SimulatePrincipalPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SimulatePrincipalPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SimulatePrincipalPolicyResponse)
    Q_DISABLE_COPY(SimulatePrincipalPolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
