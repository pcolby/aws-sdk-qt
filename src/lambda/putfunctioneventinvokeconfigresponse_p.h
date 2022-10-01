// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFUNCTIONEVENTINVOKECONFIGRESPONSE_P_H
#define QTAWS_PUTFUNCTIONEVENTINVOKECONFIGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class PutFunctionEventInvokeConfigResponse;

class PutFunctionEventInvokeConfigResponsePrivate : public LambdaResponsePrivate {

public:

    explicit PutFunctionEventInvokeConfigResponsePrivate(PutFunctionEventInvokeConfigResponse * const q);

    void parsePutFunctionEventInvokeConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutFunctionEventInvokeConfigResponse)
    Q_DISABLE_COPY(PutFunctionEventInvokeConfigResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
