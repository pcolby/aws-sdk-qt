// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETITEMRESPONSE_H
#define QTAWS_GETITEMRESPONSE_H

#include "dynamodbresponse.h"
#include "getitemrequest.h"

namespace QtAws {
namespace DynamoDb {

class GetItemResponsePrivate;

class QTAWSDYNAMODB_EXPORT GetItemResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    GetItemResponse(const GetItemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetItemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetItemResponse)
    Q_DISABLE_COPY(GetItemResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
