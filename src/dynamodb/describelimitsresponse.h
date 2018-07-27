/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBELIMITSRESPONSE_H
#define QTAWS_DESCRIBELIMITSRESPONSE_H

#include "dynamodbresponse.h"
#include "describelimitsrequest.h"

namespace QtAws {
namespace DynamoDB {

class DescribeLimitsResponsePrivate;

class QTAWS_EXPORT DescribeLimitsResponse : public DynamoDBResponse {
    Q_OBJECT

public:
    DescribeLimitsResponse(const DescribeLimitsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLimitsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLimitsResponse)
    Q_DISABLE_COPY(DescribeLimitsResponse)

};

} // namespace DynamoDB
} // namespace QtAws

#endif
