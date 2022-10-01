// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECODESIGNINGCONFIGRESPONSE_P_H
#define QTAWS_CREATECODESIGNINGCONFIGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class CreateCodeSigningConfigResponse;

class CreateCodeSigningConfigResponsePrivate : public LambdaResponsePrivate {

public:

    explicit CreateCodeSigningConfigResponsePrivate(CreateCodeSigningConfigResponse * const q);

    void parseCreateCodeSigningConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCodeSigningConfigResponse)
    Q_DISABLE_COPY(CreateCodeSigningConfigResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
