// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCHEDULEDQUERYRESPONSE_H
#define QTAWS_UPDATESCHEDULEDQUERYRESPONSE_H

#include "timestreamqueryresponse.h"
#include "updatescheduledqueryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class UpdateScheduledQueryResponsePrivate;

class QTAWSTIMESTREAMQUERY_EXPORT UpdateScheduledQueryResponse : public TimestreamQueryResponse {
    Q_OBJECT

public:
    UpdateScheduledQueryResponse(const UpdateScheduledQueryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateScheduledQueryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateScheduledQueryResponse)
    Q_DISABLE_COPY(UpdateScheduledQueryResponse)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
