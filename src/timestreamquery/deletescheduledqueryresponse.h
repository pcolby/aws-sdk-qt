// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULEDQUERYRESPONSE_H
#define QTAWS_DELETESCHEDULEDQUERYRESPONSE_H

#include "timestreamqueryresponse.h"
#include "deletescheduledqueryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class DeleteScheduledQueryResponsePrivate;

class QTAWSTIMESTREAMQUERY_EXPORT DeleteScheduledQueryResponse : public TimestreamQueryResponse {
    Q_OBJECT

public:
    DeleteScheduledQueryResponse(const DeleteScheduledQueryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteScheduledQueryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteScheduledQueryResponse)
    Q_DISABLE_COPY(DeleteScheduledQueryResponse)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
