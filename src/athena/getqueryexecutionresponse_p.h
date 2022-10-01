// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYEXECUTIONRESPONSE_P_H
#define QTAWS_GETQUERYEXECUTIONRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class GetQueryExecutionResponse;

class GetQueryExecutionResponsePrivate : public AthenaResponsePrivate {

public:

    explicit GetQueryExecutionResponsePrivate(GetQueryExecutionResponse * const q);

    void parseGetQueryExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetQueryExecutionResponse)
    Q_DISABLE_COPY(GetQueryExecutionResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
