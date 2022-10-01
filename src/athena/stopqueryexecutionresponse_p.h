// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPQUERYEXECUTIONRESPONSE_P_H
#define QTAWS_STOPQUERYEXECUTIONRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class StopQueryExecutionResponse;

class StopQueryExecutionResponsePrivate : public AthenaResponsePrivate {

public:

    explicit StopQueryExecutionResponsePrivate(StopQueryExecutionResponse * const q);

    void parseStopQueryExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopQueryExecutionResponse)
    Q_DISABLE_COPY(StopQueryExecutionResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
