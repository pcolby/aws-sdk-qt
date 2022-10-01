// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEDULEDQUERIESRESPONSE_H
#define QTAWS_LISTSCHEDULEDQUERIESRESPONSE_H

#include "timestreamqueryresponse.h"
#include "listscheduledqueriesrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class ListScheduledQueriesResponsePrivate;

class QTAWSTIMESTREAMQUERY_EXPORT ListScheduledQueriesResponse : public TimestreamQueryResponse {
    Q_OBJECT

public:
    ListScheduledQueriesResponse(const ListScheduledQueriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListScheduledQueriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListScheduledQueriesResponse)
    Q_DISABLE_COPY(ListScheduledQueriesResponse)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
