// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTQUERYEXECUTIONRESPONSE_H
#define QTAWS_STARTQUERYEXECUTIONRESPONSE_H

#include "athenaresponse.h"
#include "startqueryexecutionrequest.h"

namespace QtAws {
namespace Athena {

class StartQueryExecutionResponsePrivate;

class QTAWSATHENA_EXPORT StartQueryExecutionResponse : public AthenaResponse {
    Q_OBJECT

public:
    StartQueryExecutionResponse(const StartQueryExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartQueryExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartQueryExecutionResponse)
    Q_DISABLE_COPY(StartQueryExecutionResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
