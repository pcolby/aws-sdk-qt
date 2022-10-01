// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETPREPAREDSTATEMENTRESPONSE_H
#define QTAWS_BATCHGETPREPAREDSTATEMENTRESPONSE_H

#include "athenaresponse.h"
#include "batchgetpreparedstatementrequest.h"

namespace QtAws {
namespace Athena {

class BatchGetPreparedStatementResponsePrivate;

class QTAWSATHENA_EXPORT BatchGetPreparedStatementResponse : public AthenaResponse {
    Q_OBJECT

public:
    BatchGetPreparedStatementResponse(const BatchGetPreparedStatementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetPreparedStatementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetPreparedStatementResponse)
    Q_DISABLE_COPY(BatchGetPreparedStatementResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
