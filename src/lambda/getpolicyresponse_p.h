// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPOLICYRESPONSE_P_H
#define QTAWS_GETPOLICYRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class GetPolicyResponse;

class GetPolicyResponsePrivate : public LambdaResponsePrivate {

public:

    explicit GetPolicyResponsePrivate(GetPolicyResponse * const q);

    void parseGetPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPolicyResponse)
    Q_DISABLE_COPY(GetPolicyResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
