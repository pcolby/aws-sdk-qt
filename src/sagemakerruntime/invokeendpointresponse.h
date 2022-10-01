// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKEENDPOINTRESPONSE_H
#define QTAWS_INVOKEENDPOINTRESPONSE_H

#include "sagemakerruntimeresponse.h"
#include "invokeendpointrequest.h"

namespace QtAws {
namespace SageMakerRuntime {

class InvokeEndpointResponsePrivate;

class QTAWSSAGEMAKERRUNTIME_EXPORT InvokeEndpointResponse : public SageMakerRuntimeResponse {
    Q_OBJECT

public:
    InvokeEndpointResponse(const InvokeEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InvokeEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InvokeEndpointResponse)
    Q_DISABLE_COPY(InvokeEndpointResponse)

};

} // namespace SageMakerRuntime
} // namespace QtAws

#endif
