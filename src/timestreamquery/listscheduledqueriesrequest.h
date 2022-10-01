// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEDULEDQUERIESREQUEST_H
#define QTAWS_LISTSCHEDULEDQUERIESREQUEST_H

#include "timestreamqueryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class ListScheduledQueriesRequestPrivate;

class QTAWSTIMESTREAMQUERY_EXPORT ListScheduledQueriesRequest : public TimestreamQueryRequest {

public:
    ListScheduledQueriesRequest(const ListScheduledQueriesRequest &other);
    ListScheduledQueriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListScheduledQueriesRequest)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
