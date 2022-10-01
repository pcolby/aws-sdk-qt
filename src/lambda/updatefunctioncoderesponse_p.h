// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONCODERESPONSE_P_H
#define QTAWS_UPDATEFUNCTIONCODERESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class UpdateFunctionCodeResponse;

class UpdateFunctionCodeResponsePrivate : public LambdaResponsePrivate {

public:

    explicit UpdateFunctionCodeResponsePrivate(UpdateFunctionCodeResponse * const q);

    void parseUpdateFunctionCodeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFunctionCodeResponse)
    Q_DISABLE_COPY(UpdateFunctionCodeResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
