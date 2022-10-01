// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAMBDAFUNCTIONSRESPONSE_P_H
#define QTAWS_LISTLAMBDAFUNCTIONSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListLambdaFunctionsResponse;

class ListLambdaFunctionsResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListLambdaFunctionsResponsePrivate(ListLambdaFunctionsResponse * const q);

    void parseListLambdaFunctionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLambdaFunctionsResponse)
    Q_DISABLE_COPY(ListLambdaFunctionsResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
