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

#ifndef QTAWS_DESCRIBESERVERSRESPONSE_H
#define QTAWS_DESCRIBESERVERSRESPONSE_H

#include "opsworkscmresponse.h"
#include "describeserversrequest.h"

namespace QtAws {
namespace OpsWorksCM {

class DescribeServersResponsePrivate;

class QTAWS_EXPORT DescribeServersResponse : public OpsWorksCMResponse {
    Q_OBJECT

public:
    DescribeServersResponse(const DescribeServersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeServersRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(DescribeServersResponse)
    Q_DISABLE_COPY(DescribeServersResponse)

};

} // namespace OpsWorksCM
} // namespace QtAws

#endif
