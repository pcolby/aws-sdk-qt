// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONCONCURRENCYRESPONSE_P_H
#define QTAWS_DELETEFUNCTIONCONCURRENCYRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class DeleteFunctionConcurrencyResponse;

class DeleteFunctionConcurrencyResponsePrivate : public LambdaResponsePrivate {

public:

    explicit DeleteFunctionConcurrencyResponsePrivate(DeleteFunctionConcurrencyResponse * const q);

    void parseDeleteFunctionConcurrencyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFunctionConcurrencyResponse)
    Q_DISABLE_COPY(DeleteFunctionConcurrencyResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
