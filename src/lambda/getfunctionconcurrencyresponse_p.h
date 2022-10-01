// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONCONCURRENCYRESPONSE_P_H
#define QTAWS_GETFUNCTIONCONCURRENCYRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class GetFunctionConcurrencyResponse;

class GetFunctionConcurrencyResponsePrivate : public LambdaResponsePrivate {

public:

    explicit GetFunctionConcurrencyResponsePrivate(GetFunctionConcurrencyResponse * const q);

    void parseGetFunctionConcurrencyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFunctionConcurrencyResponse)
    Q_DISABLE_COPY(GetFunctionConcurrencyResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
