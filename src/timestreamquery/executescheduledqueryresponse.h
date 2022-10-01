// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTESCHEDULEDQUERYRESPONSE_H
#define QTAWS_EXECUTESCHEDULEDQUERYRESPONSE_H

#include "timestreamqueryresponse.h"
#include "executescheduledqueryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class ExecuteScheduledQueryResponsePrivate;

class QTAWSTIMESTREAMQUERY_EXPORT ExecuteScheduledQueryResponse : public TimestreamQueryResponse {
    Q_OBJECT

public:
    ExecuteScheduledQueryResponse(const ExecuteScheduledQueryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExecuteScheduledQueryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExecuteScheduledQueryResponse)
    Q_DISABLE_COPY(ExecuteScheduledQueryResponse)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
