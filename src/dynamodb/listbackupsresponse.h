// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPSRESPONSE_H
#define QTAWS_LISTBACKUPSRESPONSE_H

#include "dynamodbresponse.h"
#include "listbackupsrequest.h"

namespace QtAws {
namespace DynamoDb {

class ListBackupsResponsePrivate;

class QTAWSDYNAMODB_EXPORT ListBackupsResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    ListBackupsResponse(const ListBackupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBackupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBackupsResponse)
    Q_DISABLE_COPY(ListBackupsResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
