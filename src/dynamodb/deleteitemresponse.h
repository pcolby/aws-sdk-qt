// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEITEMRESPONSE_H
#define QTAWS_DELETEITEMRESPONSE_H

#include "dynamodbresponse.h"
#include "deleteitemrequest.h"

namespace QtAws {
namespace DynamoDb {

class DeleteItemResponsePrivate;

class QTAWSDYNAMODB_EXPORT DeleteItemResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    DeleteItemResponse(const DeleteItemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteItemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteItemResponse)
    Q_DISABLE_COPY(DeleteItemResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
