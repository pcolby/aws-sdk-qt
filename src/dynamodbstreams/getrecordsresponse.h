// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECORDSRESPONSE_H
#define QTAWS_GETRECORDSRESPONSE_H

#include "dynamodbstreamsresponse.h"
#include "getrecordsrequest.h"

namespace QtAws {
namespace DynamoDbStreams {

class GetRecordsResponsePrivate;

class QTAWSDYNAMODBSTREAMS_EXPORT GetRecordsResponse : public DynamoDbStreamsResponse {
    Q_OBJECT

public:
    GetRecordsResponse(const GetRecordsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRecordsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecordsResponse)
    Q_DISABLE_COPY(GetRecordsResponse)

};

} // namespace DynamoDbStreams
} // namespace QtAws

#endif
