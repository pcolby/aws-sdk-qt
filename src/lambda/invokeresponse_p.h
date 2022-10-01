// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKERESPONSE_P_H
#define QTAWS_INVOKERESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class InvokeResponse;

class InvokeResponsePrivate : public LambdaResponsePrivate {

public:

    explicit InvokeResponsePrivate(InvokeResponse * const q);

    void parseInvokeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InvokeResponse)
    Q_DISABLE_COPY(InvokeResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
