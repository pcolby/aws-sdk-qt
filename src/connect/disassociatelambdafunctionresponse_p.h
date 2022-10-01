// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATELAMBDAFUNCTIONRESPONSE_P_H
#define QTAWS_DISASSOCIATELAMBDAFUNCTIONRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DisassociateLambdaFunctionResponse;

class DisassociateLambdaFunctionResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DisassociateLambdaFunctionResponsePrivate(DisassociateLambdaFunctionResponse * const q);

    void parseDisassociateLambdaFunctionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateLambdaFunctionResponse)
    Q_DISABLE_COPY(DisassociateLambdaFunctionResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
