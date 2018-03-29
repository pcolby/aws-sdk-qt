/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETRECORDSRESPONSE_H
#define QTAWS_GETRECORDSRESPONSE_H

#include "dynamodbstreamsresponse.h"
#include "getrecordsrequest.h"

namespace QtAws {
namespace DynamoDBStreams {

class GetRecordsResponsePrivate;

class QTAWS_EXPORT GetRecordsResponse : public DynamoDBStreamsResponse {
    Q_OBJECT

public:
    GetRecordsResponse(const GetRecordsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRecordsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetRecordsResponse)
    Q_DISABLE_COPY(GetRecordsResponse)

};

} // namespace DynamoDBStreams
} // namespace QtAws

#endif
