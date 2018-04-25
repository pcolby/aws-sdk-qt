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

#ifndef QTAWS_DESCRIBESTACKSETRESPONSE_H
#define QTAWS_DESCRIBESTACKSETRESPONSE_H

#include "cloudformationresponse.h"
#include "describestacksetrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackSetResponsePrivate;

class QTAWS_EXPORT DescribeStackSetResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DescribeStackSetResponse(const DescribeStackSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStackSetRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(DescribeStackSetResponse)
    Q_DISABLE_COPY(DescribeStackSetResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
