// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONEVENTINVOKECONFIGRESPONSE_P_H
#define QTAWS_GETFUNCTIONEVENTINVOKECONFIGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class GetFunctionEventInvokeConfigResponse;

class GetFunctionEventInvokeConfigResponsePrivate : public LambdaResponsePrivate {

public:

    explicit GetFunctionEventInvokeConfigResponsePrivate(GetFunctionEventInvokeConfigResponse * const q);

    void parseGetFunctionEventInvokeConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFunctionEventInvokeConfigResponse)
    Q_DISABLE_COPY(GetFunctionEventInvokeConfigResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
