// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONSRESPONSE_H
#define QTAWS_LISTFUNCTIONSRESPONSE_H

#include "lambdaresponse.h"
#include "listfunctionsrequest.h"

namespace QtAws {
namespace Lambda {

class ListFunctionsResponsePrivate;

class QTAWSLAMBDA_EXPORT ListFunctionsResponse : public LambdaResponse {
    Q_OBJECT

public:
    ListFunctionsResponse(const ListFunctionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFunctionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFunctionsResponse)
    Q_DISABLE_COPY(ListFunctionsResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
