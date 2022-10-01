// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONEVENTINVOKECONFIGRESPONSE_P_H
#define QTAWS_DELETEFUNCTIONEVENTINVOKECONFIGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class DeleteFunctionEventInvokeConfigResponse;

class DeleteFunctionEventInvokeConfigResponsePrivate : public LambdaResponsePrivate {

public:

    explicit DeleteFunctionEventInvokeConfigResponsePrivate(DeleteFunctionEventInvokeConfigResponse * const q);

    void parseDeleteFunctionEventInvokeConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFunctionEventInvokeConfigResponse)
    Q_DISABLE_COPY(DeleteFunctionEventInvokeConfigResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
