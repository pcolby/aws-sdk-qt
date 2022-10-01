// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONCODESIGNINGCONFIGRESPONSE_P_H
#define QTAWS_GETFUNCTIONCODESIGNINGCONFIGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class GetFunctionCodeSigningConfigResponse;

class GetFunctionCodeSigningConfigResponsePrivate : public LambdaResponsePrivate {

public:

    explicit GetFunctionCodeSigningConfigResponsePrivate(GetFunctionCodeSigningConfigResponse * const q);

    void parseGetFunctionCodeSigningConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFunctionCodeSigningConfigResponse)
    Q_DISABLE_COPY(GetFunctionCodeSigningConfigResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
