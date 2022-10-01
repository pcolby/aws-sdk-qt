// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETQUERYEXECUTIONRESPONSE_P_H
#define QTAWS_BATCHGETQUERYEXECUTIONRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class BatchGetQueryExecutionResponse;

class BatchGetQueryExecutionResponsePrivate : public AthenaResponsePrivate {

public:

    explicit BatchGetQueryExecutionResponsePrivate(BatchGetQueryExecutionResponse * const q);

    void parseBatchGetQueryExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetQueryExecutionResponse)
    Q_DISABLE_COPY(BatchGetQueryExecutionResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
