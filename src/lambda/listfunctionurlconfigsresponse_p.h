// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONURLCONFIGSRESPONSE_P_H
#define QTAWS_LISTFUNCTIONURLCONFIGSRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class ListFunctionUrlConfigsResponse;

class ListFunctionUrlConfigsResponsePrivate : public LambdaResponsePrivate {

public:

    explicit ListFunctionUrlConfigsResponsePrivate(ListFunctionUrlConfigsResponse * const q);

    void parseListFunctionUrlConfigsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFunctionUrlConfigsResponse)
    Q_DISABLE_COPY(ListFunctionUrlConfigsResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
