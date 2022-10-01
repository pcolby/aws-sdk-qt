// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTITEMRESPONSE_H
#define QTAWS_PUTITEMRESPONSE_H

#include "dynamodbresponse.h"
#include "putitemrequest.h"

namespace QtAws {
namespace DynamoDb {

class PutItemResponsePrivate;

class QTAWSDYNAMODB_EXPORT PutItemResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    PutItemResponse(const PutItemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutItemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutItemResponse)
    Q_DISABLE_COPY(PutItemResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
