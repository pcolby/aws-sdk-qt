// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONSBYCODESIGNINGCONFIGRESPONSE_P_H
#define QTAWS_LISTFUNCTIONSBYCODESIGNINGCONFIGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class ListFunctionsByCodeSigningConfigResponse;

class ListFunctionsByCodeSigningConfigResponsePrivate : public LambdaResponsePrivate {

public:

    explicit ListFunctionsByCodeSigningConfigResponsePrivate(ListFunctionsByCodeSigningConfigResponse * const q);

    void parseListFunctionsByCodeSigningConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFunctionsByCodeSigningConfigResponse)
    Q_DISABLE_COPY(ListFunctionsByCodeSigningConfigResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
