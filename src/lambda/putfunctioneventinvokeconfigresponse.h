// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFUNCTIONEVENTINVOKECONFIGRESPONSE_H
#define QTAWS_PUTFUNCTIONEVENTINVOKECONFIGRESPONSE_H

#include "lambdaresponse.h"
#include "putfunctioneventinvokeconfigrequest.h"

namespace QtAws {
namespace Lambda {

class PutFunctionEventInvokeConfigResponsePrivate;

class QTAWSLAMBDA_EXPORT PutFunctionEventInvokeConfigResponse : public LambdaResponse {
    Q_OBJECT

public:
    PutFunctionEventInvokeConfigResponse(const PutFunctionEventInvokeConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutFunctionEventInvokeConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutFunctionEventInvokeConfigResponse)
    Q_DISABLE_COPY(PutFunctionEventInvokeConfigResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
