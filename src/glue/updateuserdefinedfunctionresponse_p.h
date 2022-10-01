// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERDEFINEDFUNCTIONRESPONSE_P_H
#define QTAWS_UPDATEUSERDEFINEDFUNCTIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class UpdateUserDefinedFunctionResponse;

class UpdateUserDefinedFunctionResponsePrivate : public GlueResponsePrivate {

public:

    explicit UpdateUserDefinedFunctionResponsePrivate(UpdateUserDefinedFunctionResponse * const q);

    void parseUpdateUserDefinedFunctionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateUserDefinedFunctionResponse)
    Q_DISABLE_COPY(UpdateUserDefinedFunctionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
