// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONCODESIGNINGCONFIGRESPONSE_P_H
#define QTAWS_DELETEFUNCTIONCODESIGNINGCONFIGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class DeleteFunctionCodeSigningConfigResponse;

class DeleteFunctionCodeSigningConfigResponsePrivate : public LambdaResponsePrivate {

public:

    explicit DeleteFunctionCodeSigningConfigResponsePrivate(DeleteFunctionCodeSigningConfigResponse * const q);

    void parseDeleteFunctionCodeSigningConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFunctionCodeSigningConfigResponse)
    Q_DISABLE_COPY(DeleteFunctionCodeSigningConfigResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
