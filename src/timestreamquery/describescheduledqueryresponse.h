// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEDQUERYRESPONSE_H
#define QTAWS_DESCRIBESCHEDULEDQUERYRESPONSE_H

#include "timestreamqueryresponse.h"
#include "describescheduledqueryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class DescribeScheduledQueryResponsePrivate;

class QTAWSTIMESTREAMQUERY_EXPORT DescribeScheduledQueryResponse : public TimestreamQueryResponse {
    Q_OBJECT

public:
    DescribeScheduledQueryResponse(const DescribeScheduledQueryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeScheduledQueryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScheduledQueryResponse)
    Q_DISABLE_COPY(DescribeScheduledQueryResponse)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
