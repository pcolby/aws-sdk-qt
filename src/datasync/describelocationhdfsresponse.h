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

#ifndef QTAWS_DESCRIBELOCATIONHDFSRESPONSE_H
#define QTAWS_DESCRIBELOCATIONHDFSRESPONSE_H

#include "datasyncresponse.h"
#include "describelocationhdfsrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationHdfsResponsePrivate;

class QTAWSDATASYNC_EXPORT DescribeLocationHdfsResponse : public DataSyncResponse {
    Q_OBJECT

public:
    DescribeLocationHdfsResponse(const DescribeLocationHdfsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLocationHdfsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocationHdfsResponse)
    Q_DISABLE_COPY(DescribeLocationHdfsResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
