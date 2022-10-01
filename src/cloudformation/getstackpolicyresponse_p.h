// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTACKPOLICYRESPONSE_P_H
#define QTAWS_GETSTACKPOLICYRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class GetStackPolicyResponse;

class GetStackPolicyResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit GetStackPolicyResponsePrivate(GetStackPolicyResponse * const q);

    void parseGetStackPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStackPolicyResponse)
    Q_DISABLE_COPY(GetStackPolicyResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
