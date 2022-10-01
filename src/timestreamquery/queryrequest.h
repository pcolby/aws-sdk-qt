// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYREQUEST_H
#define QTAWS_QUERYREQUEST_H

#include "timestreamqueryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class QueryRequestPrivate;

class QTAWSTIMESTREAMQUERY_EXPORT QueryRequest : public TimestreamQueryRequest {

public:
    QueryRequest(const QueryRequest &other);
    QueryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QueryRequest)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
