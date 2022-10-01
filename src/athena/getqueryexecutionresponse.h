// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYEXECUTIONRESPONSE_H
#define QTAWS_GETQUERYEXECUTIONRESPONSE_H

#include "athenaresponse.h"
#include "getqueryexecutionrequest.h"

namespace QtAws {
namespace Athena {

class GetQueryExecutionResponsePrivate;

class QTAWSATHENA_EXPORT GetQueryExecutionResponse : public AthenaResponse {
    Q_OBJECT

public:
    GetQueryExecutionResponse(const GetQueryExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetQueryExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQueryExecutionResponse)
    Q_DISABLE_COPY(GetQueryExecutionResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
