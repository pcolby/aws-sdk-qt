// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHEXECUTESTATEMENTRESPONSE_H
#define QTAWS_BATCHEXECUTESTATEMENTRESPONSE_H

#include "redshiftdataresponse.h"
#include "batchexecutestatementrequest.h"

namespace QtAws {
namespace RedshiftData {

class BatchExecuteStatementResponsePrivate;

class QTAWSREDSHIFTDATA_EXPORT BatchExecuteStatementResponse : public RedshiftDataResponse {
    Q_OBJECT

public:
    BatchExecuteStatementResponse(const BatchExecuteStatementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchExecuteStatementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchExecuteStatementResponse)
    Q_DISABLE_COPY(BatchExecuteStatementResponse)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
