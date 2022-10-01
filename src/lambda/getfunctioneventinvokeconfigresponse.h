// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONEVENTINVOKECONFIGRESPONSE_H
#define QTAWS_GETFUNCTIONEVENTINVOKECONFIGRESPONSE_H

#include "lambdaresponse.h"
#include "getfunctioneventinvokeconfigrequest.h"

namespace QtAws {
namespace Lambda {

class GetFunctionEventInvokeConfigResponsePrivate;

class QTAWSLAMBDA_EXPORT GetFunctionEventInvokeConfigResponse : public LambdaResponse {
    Q_OBJECT

public:
    GetFunctionEventInvokeConfigResponse(const GetFunctionEventInvokeConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFunctionEventInvokeConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFunctionEventInvokeConfigResponse)
    Q_DISABLE_COPY(GetFunctionEventInvokeConfigResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
