// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEITEMRESPONSE_H
#define QTAWS_UPDATEITEMRESPONSE_H

#include "dynamodbresponse.h"
#include "updateitemrequest.h"

namespace QtAws {
namespace DynamoDb {

class UpdateItemResponsePrivate;

class QTAWSDYNAMODB_EXPORT UpdateItemResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    UpdateItemResponse(const UpdateItemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateItemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateItemResponse)
    Q_DISABLE_COPY(UpdateItemResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
