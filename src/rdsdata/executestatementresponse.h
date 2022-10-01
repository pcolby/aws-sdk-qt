// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTESTATEMENTRESPONSE_H
#define QTAWS_EXECUTESTATEMENTRESPONSE_H

#include "rdsdataresponse.h"
#include "executestatementrequest.h"

namespace QtAws {
namespace RdsData {

class ExecuteStatementResponsePrivate;

class QTAWSRDSDATA_EXPORT ExecuteStatementResponse : public RdsDataResponse {
    Q_OBJECT

public:
    ExecuteStatementResponse(const ExecuteStatementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExecuteStatementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExecuteStatementResponse)
    Q_DISABLE_COPY(ExecuteStatementResponse)

};

} // namespace RdsData
} // namespace QtAws

#endif
