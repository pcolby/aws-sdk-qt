// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFUNCTIONCODESIGNINGCONFIGRESPONSE_P_H
#define QTAWS_PUTFUNCTIONCODESIGNINGCONFIGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class PutFunctionCodeSigningConfigResponse;

class PutFunctionCodeSigningConfigResponsePrivate : public LambdaResponsePrivate {

public:

    explicit PutFunctionCodeSigningConfigResponsePrivate(PutFunctionCodeSigningConfigResponse * const q);

    void parsePutFunctionCodeSigningConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutFunctionCodeSigningConfigResponse)
    Q_DISABLE_COPY(PutFunctionCodeSigningConfigResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
