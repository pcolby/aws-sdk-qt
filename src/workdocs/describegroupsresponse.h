/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_DESCRIBEGROUPSRESPONSE_H
#define QTAWS_DESCRIBEGROUPSRESPONSE_H

#include "workdocsresponse.h"
#include "describegroupsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeGroupsResponsePrivate;

class QTAWS_EXPORT DescribeGroupsResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    DescribeGroupsResponse(const DescribeGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGroupsResponse)
    Q_DISABLE_COPY(DescribeGroupsResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
