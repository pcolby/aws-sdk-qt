// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVERSIONSBYFUNCTIONRESPONSE_P_H
#define QTAWS_LISTVERSIONSBYFUNCTIONRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class ListVersionsByFunctionResponse;

class ListVersionsByFunctionResponsePrivate : public LambdaResponsePrivate {

public:

    explicit ListVersionsByFunctionResponsePrivate(ListVersionsByFunctionResponse * const q);

    void parseListVersionsByFunctionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVersionsByFunctionResponse)
    Q_DISABLE_COPY(ListVersionsByFunctionResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
