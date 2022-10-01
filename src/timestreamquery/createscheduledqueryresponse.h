// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEDULEDQUERYRESPONSE_H
#define QTAWS_CREATESCHEDULEDQUERYRESPONSE_H

#include "timestreamqueryresponse.h"
#include "createscheduledqueryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class CreateScheduledQueryResponsePrivate;

class QTAWSTIMESTREAMQUERY_EXPORT CreateScheduledQueryResponse : public TimestreamQueryResponse {
    Q_OBJECT

public:
    CreateScheduledQueryResponse(const CreateScheduledQueryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateScheduledQueryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateScheduledQueryResponse)
    Q_DISABLE_COPY(CreateScheduledQueryResponse)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
