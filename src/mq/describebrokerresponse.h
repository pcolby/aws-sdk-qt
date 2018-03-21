/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBEBROKERRESPONSE_H
#define QTAWS_DESCRIBEBROKERRESPONSE_H

#include "mqresponse.h"
#include "describebrokerrequest.h"

namespace AWS {

namespace MQ {

class DescribeBrokerResponsePrivate;

class QTAWS_EXPORT DescribeBrokerResponse : public DescribeBrokerResponse {
    Q_OBJECT

public:
    DescribeBrokerResponse(const DescribeBrokerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBrokerRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeBrokerResponse)
    Q_DISABLE_COPY(DescribeBrokerResponse)

};

} // namespace MQ
} // namespace AWS

#endif
