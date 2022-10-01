// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERDEFINEDFUNCTIONRESPONSE_P_H
#define QTAWS_GETUSERDEFINEDFUNCTIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetUserDefinedFunctionResponse;

class GetUserDefinedFunctionResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetUserDefinedFunctionResponsePrivate(GetUserDefinedFunctionResponse * const q);

    void parseGetUserDefinedFunctionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUserDefinedFunctionResponse)
    Q_DISABLE_COPY(GetUserDefinedFunctionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
