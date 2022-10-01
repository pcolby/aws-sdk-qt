// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPQUERYEXECUTIONRESPONSE_H
#define QTAWS_STOPQUERYEXECUTIONRESPONSE_H

#include "athenaresponse.h"
#include "stopqueryexecutionrequest.h"

namespace QtAws {
namespace Athena {

class StopQueryExecutionResponsePrivate;

class QTAWSATHENA_EXPORT StopQueryExecutionResponse : public AthenaResponse {
    Q_OBJECT

public:
    StopQueryExecutionResponse(const StopQueryExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopQueryExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopQueryExecutionResponse)
    Q_DISABLE_COPY(StopQueryExecutionResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
