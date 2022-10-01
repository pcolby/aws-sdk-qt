// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSTACKPOLICYRESPONSE_P_H
#define QTAWS_SETSTACKPOLICYRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class SetStackPolicyResponse;

class SetStackPolicyResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit SetStackPolicyResponsePrivate(SetStackPolicyResponse * const q);

    void parseSetStackPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetStackPolicyResponse)
    Q_DISABLE_COPY(SetStackPolicyResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
