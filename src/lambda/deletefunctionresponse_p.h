// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONRESPONSE_P_H
#define QTAWS_DELETEFUNCTIONRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class DeleteFunctionResponse;

class DeleteFunctionResponsePrivate : public LambdaResponsePrivate {

public:

    explicit DeleteFunctionResponsePrivate(DeleteFunctionResponse * const q);

    void parseDeleteFunctionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFunctionResponse)
    Q_DISABLE_COPY(DeleteFunctionResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
