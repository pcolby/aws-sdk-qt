// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONEVENTINVOKECONFIGRESPONSE_P_H
#define QTAWS_UPDATEFUNCTIONEVENTINVOKECONFIGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class UpdateFunctionEventInvokeConfigResponse;

class UpdateFunctionEventInvokeConfigResponsePrivate : public LambdaResponsePrivate {

public:

    explicit UpdateFunctionEventInvokeConfigResponsePrivate(UpdateFunctionEventInvokeConfigResponse * const q);

    void parseUpdateFunctionEventInvokeConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFunctionEventInvokeConfigResponse)
    Q_DISABLE_COPY(UpdateFunctionEventInvokeConfigResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
