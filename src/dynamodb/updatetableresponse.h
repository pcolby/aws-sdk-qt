// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETABLERESPONSE_H
#define QTAWS_UPDATETABLERESPONSE_H

#include "dynamodbresponse.h"
#include "updatetablerequest.h"

namespace QtAws {
namespace DynamoDb {

class UpdateTableResponsePrivate;

class QTAWSDYNAMODB_EXPORT UpdateTableResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    UpdateTableResponse(const UpdateTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTableResponse)
    Q_DISABLE_COPY(UpdateTableResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
