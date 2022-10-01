// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNSTATEMENTRESPONSE_P_H
#define QTAWS_RUNSTATEMENTRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class RunStatementResponse;

class RunStatementResponsePrivate : public GlueResponsePrivate {

public:

    explicit RunStatementResponsePrivate(RunStatementResponse * const q);

    void parseRunStatementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RunStatementResponse)
    Q_DISABLE_COPY(RunStatementResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
