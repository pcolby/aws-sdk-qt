// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECODESIGNINGCONFIGRESPONSE_P_H
#define QTAWS_DELETECODESIGNINGCONFIGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class DeleteCodeSigningConfigResponse;

class DeleteCodeSigningConfigResponsePrivate : public LambdaResponsePrivate {

public:

    explicit DeleteCodeSigningConfigResponsePrivate(DeleteCodeSigningConfigResponse * const q);

    void parseDeleteCodeSigningConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCodeSigningConfigResponse)
    Q_DISABLE_COPY(DeleteCodeSigningConfigResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
