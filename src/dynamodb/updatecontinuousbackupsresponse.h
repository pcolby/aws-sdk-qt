// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTINUOUSBACKUPSRESPONSE_H
#define QTAWS_UPDATECONTINUOUSBACKUPSRESPONSE_H

#include "dynamodbresponse.h"
#include "updatecontinuousbackupsrequest.h"

namespace QtAws {
namespace DynamoDb {

class UpdateContinuousBackupsResponsePrivate;

class QTAWSDYNAMODB_EXPORT UpdateContinuousBackupsResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    UpdateContinuousBackupsResponse(const UpdateContinuousBackupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateContinuousBackupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContinuousBackupsResponse)
    Q_DISABLE_COPY(UpdateContinuousBackupsResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
