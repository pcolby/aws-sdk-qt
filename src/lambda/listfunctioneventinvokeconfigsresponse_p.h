// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONEVENTINVOKECONFIGSRESPONSE_P_H
#define QTAWS_LISTFUNCTIONEVENTINVOKECONFIGSRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class ListFunctionEventInvokeConfigsResponse;

class ListFunctionEventInvokeConfigsResponsePrivate : public LambdaResponsePrivate {

public:

    explicit ListFunctionEventInvokeConfigsResponsePrivate(ListFunctionEventInvokeConfigsResponse * const q);

    void parseListFunctionEventInvokeConfigsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFunctionEventInvokeConfigsResponse)
    Q_DISABLE_COPY(ListFunctionEventInvokeConfigsResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
