// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERDEFINEDFUNCTIONSRESPONSE_P_H
#define QTAWS_GETUSERDEFINEDFUNCTIONSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetUserDefinedFunctionsResponse;

class GetUserDefinedFunctionsResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetUserDefinedFunctionsResponsePrivate(GetUserDefinedFunctionsResponse * const q);

    void parseGetUserDefinedFunctionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUserDefinedFunctionsResponse)
    Q_DISABLE_COPY(GetUserDefinedFunctionsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
