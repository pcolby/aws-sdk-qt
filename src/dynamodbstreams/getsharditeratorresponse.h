// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSHARDITERATORRESPONSE_H
#define QTAWS_GETSHARDITERATORRESPONSE_H

#include "dynamodbstreamsresponse.h"
#include "getsharditeratorrequest.h"

namespace QtAws {
namespace DynamoDbStreams {

class GetShardIteratorResponsePrivate;

class QTAWSDYNAMODBSTREAMS_EXPORT GetShardIteratorResponse : public DynamoDbStreamsResponse {
    Q_OBJECT

public:
    GetShardIteratorResponse(const GetShardIteratorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetShardIteratorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetShardIteratorResponse)
    Q_DISABLE_COPY(GetShardIteratorResponse)

};

} // namespace DynamoDbStreams
} // namespace QtAws

#endif
