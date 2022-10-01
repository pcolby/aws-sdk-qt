// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONEVENTINVOKECONFIGRESPONSE_H
#define QTAWS_UPDATEFUNCTIONEVENTINVOKECONFIGRESPONSE_H

#include "lambdaresponse.h"
#include "updatefunctioneventinvokeconfigrequest.h"

namespace QtAws {
namespace Lambda {

class UpdateFunctionEventInvokeConfigResponsePrivate;

class QTAWSLAMBDA_EXPORT UpdateFunctionEventInvokeConfigResponse : public LambdaResponse {
    Q_OBJECT

public:
    UpdateFunctionEventInvokeConfigResponse(const UpdateFunctionEventInvokeConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFunctionEventInvokeConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFunctionEventInvokeConfigResponse)
    Q_DISABLE_COPY(UpdateFunctionEventInvokeConfigResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
