// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONURLCONFIGSRESPONSE_H
#define QTAWS_LISTFUNCTIONURLCONFIGSRESPONSE_H

#include "lambdaresponse.h"
#include "listfunctionurlconfigsrequest.h"

namespace QtAws {
namespace Lambda {

class ListFunctionUrlConfigsResponsePrivate;

class QTAWSLAMBDA_EXPORT ListFunctionUrlConfigsResponse : public LambdaResponse {
    Q_OBJECT

public:
    ListFunctionUrlConfigsResponse(const ListFunctionUrlConfigsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFunctionUrlConfigsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFunctionUrlConfigsResponse)
    Q_DISABLE_COPY(ListFunctionUrlConfigsResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
