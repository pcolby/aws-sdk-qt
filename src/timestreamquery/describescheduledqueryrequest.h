// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEDQUERYREQUEST_H
#define QTAWS_DESCRIBESCHEDULEDQUERYREQUEST_H

#include "timestreamqueryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class DescribeScheduledQueryRequestPrivate;

class QTAWSTIMESTREAMQUERY_EXPORT DescribeScheduledQueryRequest : public TimestreamQueryRequest {

public:
    DescribeScheduledQueryRequest(const DescribeScheduledQueryRequest &other);
    DescribeScheduledQueryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScheduledQueryRequest)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
