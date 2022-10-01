// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONEVENTINVOKECONFIGRESPONSE_H
#define QTAWS_DELETEFUNCTIONEVENTINVOKECONFIGRESPONSE_H

#include "lambdaresponse.h"
#include "deletefunctioneventinvokeconfigrequest.h"

namespace QtAws {
namespace Lambda {

class DeleteFunctionEventInvokeConfigResponsePrivate;

class QTAWSLAMBDA_EXPORT DeleteFunctionEventInvokeConfigResponse : public LambdaResponse {
    Q_OBJECT

public:
    DeleteFunctionEventInvokeConfigResponse(const DeleteFunctionEventInvokeConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFunctionEventInvokeConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFunctionEventInvokeConfigResponse)
    Q_DISABLE_COPY(DeleteFunctionEventInvokeConfigResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
