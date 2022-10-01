// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATELAMBDAFUNCTIONRESPONSE_P_H
#define QTAWS_ASSOCIATELAMBDAFUNCTIONRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class AssociateLambdaFunctionResponse;

class AssociateLambdaFunctionResponsePrivate : public ConnectResponsePrivate {

public:

    explicit AssociateLambdaFunctionResponsePrivate(AssociateLambdaFunctionResponse * const q);

    void parseAssociateLambdaFunctionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateLambdaFunctionResponse)
    Q_DISABLE_COPY(AssociateLambdaFunctionResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
