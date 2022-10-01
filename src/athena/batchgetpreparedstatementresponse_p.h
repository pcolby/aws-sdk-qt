// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETPREPAREDSTATEMENTRESPONSE_P_H
#define QTAWS_BATCHGETPREPAREDSTATEMENTRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class BatchGetPreparedStatementResponse;

class BatchGetPreparedStatementResponsePrivate : public AthenaResponsePrivate {

public:

    explicit BatchGetPreparedStatementResponsePrivate(BatchGetPreparedStatementResponse * const q);

    void parseBatchGetPreparedStatementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetPreparedStatementResponse)
    Q_DISABLE_COPY(BatchGetPreparedStatementResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
