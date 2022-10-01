// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECODESIGNINGCONFIGRESPONSE_P_H
#define QTAWS_UPDATECODESIGNINGCONFIGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class UpdateCodeSigningConfigResponse;

class UpdateCodeSigningConfigResponsePrivate : public LambdaResponsePrivate {

public:

    explicit UpdateCodeSigningConfigResponsePrivate(UpdateCodeSigningConfigResponse * const q);

    void parseUpdateCodeSigningConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCodeSigningConfigResponse)
    Q_DISABLE_COPY(UpdateCodeSigningConfigResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
