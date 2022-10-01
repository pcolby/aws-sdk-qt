// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTATEMENTRESPONSE_P_H
#define QTAWS_GETSTATEMENTRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetStatementResponse;

class GetStatementResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetStatementResponsePrivate(GetStatementResponse * const q);

    void parseGetStatementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStatementResponse)
    Q_DISABLE_COPY(GetStatementResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
