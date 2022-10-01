// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKEENDPOINTRESPONSE_P_H
#define QTAWS_INVOKEENDPOINTRESPONSE_P_H

#include "sagemakerruntimeresponse_p.h"

namespace QtAws {
namespace SageMakerRuntime {

class InvokeEndpointResponse;

class InvokeEndpointResponsePrivate : public SageMakerRuntimeResponsePrivate {

public:

    explicit InvokeEndpointResponsePrivate(InvokeEndpointResponse * const q);

    void parseInvokeEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InvokeEndpointResponse)
    Q_DISABLE_COPY(InvokeEndpointResponsePrivate)

};

} // namespace SageMakerRuntime
} // namespace QtAws

#endif
