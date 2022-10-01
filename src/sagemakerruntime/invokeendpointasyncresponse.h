// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKEENDPOINTASYNCRESPONSE_H
#define QTAWS_INVOKEENDPOINTASYNCRESPONSE_H

#include "sagemakerruntimeresponse.h"
#include "invokeendpointasyncrequest.h"

namespace QtAws {
namespace SageMakerRuntime {

class InvokeEndpointAsyncResponsePrivate;

class QTAWSSAGEMAKERRUNTIME_EXPORT InvokeEndpointAsyncResponse : public SageMakerRuntimeResponse {
    Q_OBJECT

public:
    InvokeEndpointAsyncResponse(const InvokeEndpointAsyncRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InvokeEndpointAsyncRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InvokeEndpointAsyncResponse)
    Q_DISABLE_COPY(InvokeEndpointAsyncResponse)

};

} // namespace SageMakerRuntime
} // namespace QtAws

#endif
