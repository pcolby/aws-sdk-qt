// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGLOBALTABLESRESPONSE_H
#define QTAWS_LISTGLOBALTABLESRESPONSE_H

#include "dynamodbresponse.h"
#include "listglobaltablesrequest.h"

namespace QtAws {
namespace DynamoDb {

class ListGlobalTablesResponsePrivate;

class QTAWSDYNAMODB_EXPORT ListGlobalTablesResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    ListGlobalTablesResponse(const ListGlobalTablesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGlobalTablesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGlobalTablesResponse)
    Q_DISABLE_COPY(ListGlobalTablesResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
