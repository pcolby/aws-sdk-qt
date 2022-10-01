// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERDEFINEDFUNCTIONRESPONSE_P_H
#define QTAWS_DELETEUSERDEFINEDFUNCTIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class DeleteUserDefinedFunctionResponse;

class DeleteUserDefinedFunctionResponsePrivate : public GlueResponsePrivate {

public:

    explicit DeleteUserDefinedFunctionResponsePrivate(DeleteUserDefinedFunctionResponse * const q);

    void parseDeleteUserDefinedFunctionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteUserDefinedFunctionResponse)
    Q_DISABLE_COPY(DeleteUserDefinedFunctionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
