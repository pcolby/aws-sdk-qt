// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKEASYNCRESPONSE_P_H
#define QTAWS_INVOKEASYNCRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class InvokeAsyncResponse;

class InvokeAsyncResponsePrivate : public LambdaResponsePrivate {

public:

    explicit InvokeAsyncResponsePrivate(InvokeAsyncResponse * const q);

    void parseInvokeAsyncResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InvokeAsyncResponse)
    Q_DISABLE_COPY(InvokeAsyncResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
