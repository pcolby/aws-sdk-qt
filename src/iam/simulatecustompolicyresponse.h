// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIMULATECUSTOMPOLICYRESPONSE_H
#define QTAWS_SIMULATECUSTOMPOLICYRESPONSE_H

#include "iamresponse.h"
#include "simulatecustompolicyrequest.h"

namespace QtAws {
namespace Iam {

class SimulateCustomPolicyResponsePrivate;

class QTAWSIAM_EXPORT SimulateCustomPolicyResponse : public IamResponse {
    Q_OBJECT

public:
    SimulateCustomPolicyResponse(const SimulateCustomPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SimulateCustomPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SimulateCustomPolicyResponse)
    Q_DISABLE_COPY(SimulateCustomPolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
