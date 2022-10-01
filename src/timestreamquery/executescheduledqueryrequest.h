// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTESCHEDULEDQUERYREQUEST_H
#define QTAWS_EXECUTESCHEDULEDQUERYREQUEST_H

#include "timestreamqueryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class ExecuteScheduledQueryRequestPrivate;

class QTAWSTIMESTREAMQUERY_EXPORT ExecuteScheduledQueryRequest : public TimestreamQueryRequest {

public:
    ExecuteScheduledQueryRequest(const ExecuteScheduledQueryRequest &other);
    ExecuteScheduledQueryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExecuteScheduledQueryRequest)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
