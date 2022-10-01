// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERDEFINEDFUNCTIONRESPONSE_P_H
#define QTAWS_CREATEUSERDEFINEDFUNCTIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class CreateUserDefinedFunctionResponse;

class CreateUserDefinedFunctionResponsePrivate : public GlueResponsePrivate {

public:

    explicit CreateUserDefinedFunctionResponsePrivate(CreateUserDefinedFunctionResponse * const q);

    void parseCreateUserDefinedFunctionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateUserDefinedFunctionResponse)
    Q_DISABLE_COPY(CreateUserDefinedFunctionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
