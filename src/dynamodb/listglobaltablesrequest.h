// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGLOBALTABLESREQUEST_H
#define QTAWS_LISTGLOBALTABLESREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class ListGlobalTablesRequestPrivate;

class QTAWSDYNAMODB_EXPORT ListGlobalTablesRequest : public DynamoDbRequest {

public:
    ListGlobalTablesRequest(const ListGlobalTablesRequest &other);
    ListGlobalTablesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGlobalTablesRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
