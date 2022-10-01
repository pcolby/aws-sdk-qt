// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKEASYNCRESPONSE_H
#define QTAWS_INVOKEASYNCRESPONSE_H

#include "lambdaresponse.h"
#include "invokeasyncrequest.h"

namespace QtAws {
namespace Lambda {

class InvokeAsyncResponsePrivate;

class QTAWSLAMBDA_EXPORT InvokeAsyncResponse : public LambdaResponse {
    Q_OBJECT

public:
    InvokeAsyncResponse(const InvokeAsyncRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InvokeAsyncRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InvokeAsyncResponse)
    Q_DISABLE_COPY(InvokeAsyncResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
