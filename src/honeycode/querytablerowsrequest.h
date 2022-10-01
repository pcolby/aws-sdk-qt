// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYTABLEROWSREQUEST_H
#define QTAWS_QUERYTABLEROWSREQUEST_H

#include "honeycoderequest.h"

namespace QtAws {
namespace Honeycode {

class QueryTableRowsRequestPrivate;

class QTAWSHONEYCODE_EXPORT QueryTableRowsRequest : public HoneycodeRequest {

public:
    QueryTableRowsRequest(const QueryTableRowsRequest &other);
    QueryTableRowsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QueryTableRowsRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif
