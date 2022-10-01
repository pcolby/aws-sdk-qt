// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCODESIGNINGCONFIGRESPONSE_P_H
#define QTAWS_GETCODESIGNINGCONFIGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class GetCodeSigningConfigResponse;

class GetCodeSigningConfigResponsePrivate : public LambdaResponsePrivate {

public:

    explicit GetCodeSigningConfigResponsePrivate(GetCodeSigningConfigResponse * const q);

    void parseGetCodeSigningConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCodeSigningConfigResponse)
    Q_DISABLE_COPY(GetCodeSigningConfigResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
