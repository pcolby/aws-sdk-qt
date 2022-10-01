// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONEVENTINVOKECONFIGSRESPONSE_H
#define QTAWS_LISTFUNCTIONEVENTINVOKECONFIGSRESPONSE_H

#include "lambdaresponse.h"
#include "listfunctioneventinvokeconfigsrequest.h"

namespace QtAws {
namespace Lambda {

class ListFunctionEventInvokeConfigsResponsePrivate;

class QTAWSLAMBDA_EXPORT ListFunctionEventInvokeConfigsResponse : public LambdaResponse {
    Q_OBJECT

public:
    ListFunctionEventInvokeConfigsResponse(const ListFunctionEventInvokeConfigsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFunctionEventInvokeConfigsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFunctionEventInvokeConfigsResponse)
    Q_DISABLE_COPY(ListFunctionEventInvokeConfigsResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
