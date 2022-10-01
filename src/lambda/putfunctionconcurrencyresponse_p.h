// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFUNCTIONCONCURRENCYRESPONSE_P_H
#define QTAWS_PUTFUNCTIONCONCURRENCYRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class PutFunctionConcurrencyResponse;

class PutFunctionConcurrencyResponsePrivate : public LambdaResponsePrivate {

public:

    explicit PutFunctionConcurrencyResponsePrivate(PutFunctionConcurrencyResponse * const q);

    void parsePutFunctionConcurrencyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutFunctionConcurrencyResponse)
    Q_DISABLE_COPY(PutFunctionConcurrencyResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
