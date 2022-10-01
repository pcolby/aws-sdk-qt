// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTQUERYEXECUTIONRESPONSE_P_H
#define QTAWS_STARTQUERYEXECUTIONRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class StartQueryExecutionResponse;

class StartQueryExecutionResponsePrivate : public AthenaResponsePrivate {

public:

    explicit StartQueryExecutionResponsePrivate(StartQueryExecutionResponse * const q);

    void parseStartQueryExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartQueryExecutionResponse)
    Q_DISABLE_COPY(StartQueryExecutionResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
