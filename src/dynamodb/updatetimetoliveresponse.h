// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETIMETOLIVERESPONSE_H
#define QTAWS_UPDATETIMETOLIVERESPONSE_H

#include "dynamodbresponse.h"
#include "updatetimetoliverequest.h"

namespace QtAws {
namespace DynamoDb {

class UpdateTimeToLiveResponsePrivate;

class QTAWSDYNAMODB_EXPORT UpdateTimeToLiveResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    UpdateTimeToLiveResponse(const UpdateTimeToLiveRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTimeToLiveRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTimeToLiveResponse)
    Q_DISABLE_COPY(UpdateTimeToLiveResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
