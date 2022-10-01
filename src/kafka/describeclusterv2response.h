/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_DESCRIBECLUSTERV2RESPONSE_H
#define QTAWS_DESCRIBECLUSTERV2RESPONSE_H

#include "kafkaresponse.h"
#include "describeclusterv2request.h"

namespace QtAws {
namespace Kafka {

class DescribeClusterV2ResponsePrivate;

class QTAWSKAFKA_EXPORT DescribeClusterV2Response : public KafkaResponse {
    Q_OBJECT

public:
    DescribeClusterV2Response(const DescribeClusterV2Request &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeClusterV2Request * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClusterV2Response)
    Q_DISABLE_COPY(DescribeClusterV2Response)

};

} // namespace Kafka
} // namespace QtAws

#endif
