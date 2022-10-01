// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIMULATECUSTOMPOLICYRESPONSE_P_H
#define QTAWS_SIMULATECUSTOMPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class SimulateCustomPolicyResponse;

class SimulateCustomPolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit SimulateCustomPolicyResponsePrivate(SimulateCustomPolicyResponse * const q);

    void parseSimulateCustomPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SimulateCustomPolicyResponse)
    Q_DISABLE_COPY(SimulateCustomPolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
