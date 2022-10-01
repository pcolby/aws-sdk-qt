// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAYERVERSIONPOLICYRESPONSE_P_H
#define QTAWS_GETLAYERVERSIONPOLICYRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class GetLayerVersionPolicyResponse;

class GetLayerVersionPolicyResponsePrivate : public LambdaResponsePrivate {

public:

    explicit GetLayerVersionPolicyResponsePrivate(GetLayerVersionPolicyResponse * const q);

    void parseGetLayerVersionPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLayerVersionPolicyResponse)
    Q_DISABLE_COPY(GetLayerVersionPolicyResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
