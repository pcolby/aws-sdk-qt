// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKEENDPOINTASYNCRESPONSE_P_H
#define QTAWS_INVOKEENDPOINTASYNCRESPONSE_P_H

#include "sagemakerruntimeresponse_p.h"

namespace QtAws {
namespace SageMakerRuntime {

class InvokeEndpointAsyncResponse;

class InvokeEndpointAsyncResponsePrivate : public SageMakerRuntimeResponsePrivate {

public:

    explicit InvokeEndpointAsyncResponsePrivate(InvokeEndpointAsyncResponse * const q);

    void parseInvokeEndpointAsyncResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InvokeEndpointAsyncResponse)
    Q_DISABLE_COPY(InvokeEndpointAsyncResponsePrivate)

};

} // namespace SageMakerRuntime
} // namespace QtAws

#endif
