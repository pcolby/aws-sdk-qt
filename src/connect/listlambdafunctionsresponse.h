// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAMBDAFUNCTIONSRESPONSE_H
#define QTAWS_LISTLAMBDAFUNCTIONSRESPONSE_H

#include "connectresponse.h"
#include "listlambdafunctionsrequest.h"

namespace QtAws {
namespace Connect {

class ListLambdaFunctionsResponsePrivate;

class QTAWSCONNECT_EXPORT ListLambdaFunctionsResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListLambdaFunctionsResponse(const ListLambdaFunctionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLambdaFunctionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLambdaFunctionsResponse)
    Q_DISABLE_COPY(ListLambdaFunctionsResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
