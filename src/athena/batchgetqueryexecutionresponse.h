// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETQUERYEXECUTIONRESPONSE_H
#define QTAWS_BATCHGETQUERYEXECUTIONRESPONSE_H

#include "athenaresponse.h"
#include "batchgetqueryexecutionrequest.h"

namespace QtAws {
namespace Athena {

class BatchGetQueryExecutionResponsePrivate;

class QTAWSATHENA_EXPORT BatchGetQueryExecutionResponse : public AthenaResponse {
    Q_OBJECT

public:
    BatchGetQueryExecutionResponse(const BatchGetQueryExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetQueryExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetQueryExecutionResponse)
    Q_DISABLE_COPY(BatchGetQueryExecutionResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
