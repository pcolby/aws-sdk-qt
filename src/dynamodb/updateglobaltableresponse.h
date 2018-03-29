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

#ifndef QTAWS_UPDATEGLOBALTABLERESPONSE_H
#define QTAWS_UPDATEGLOBALTABLERESPONSE_H

#include "dynamodbresponse.h"
#include "updateglobaltablerequest.h"

namespace QtAws {
namespace DynamoDB {

class UpdateGlobalTableResponsePrivate;

class QTAWS_EXPORT UpdateGlobalTableResponse : public DynamoDBResponse {
    Q_OBJECT

public:
    UpdateGlobalTableResponse(const UpdateGlobalTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGlobalTableRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(UpdateGlobalTableResponse)
    Q_DISABLE_COPY(UpdateGlobalTableResponse)

};

} // namespace DynamoDB
} // namespace QtAws

#endif
