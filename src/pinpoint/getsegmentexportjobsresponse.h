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

#ifndef QTAWS_GETSEGMENTEXPORTJOBSRESPONSE_H
#define QTAWS_GETSEGMENTEXPORTJOBSRESPONSE_H

#include "pinpointresponse.h"
#include "getsegmentexportjobsrequest.h"

namespace AWS {

namespace Pinpoint {

class GetSegmentExportJobsResponsePrivate;

class QTAWS_EXPORT GetSegmentExportJobsResponse : public GetSegmentExportJobsResponse {
    Q_OBJECT

public:
    GetSegmentExportJobsResponse(const GetSegmentExportJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSegmentExportJobsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetSegmentExportJobsResponse)
    Q_DISABLE_COPY(GetSegmentExportJobsResponse)

};

} // namespace Pinpoint
} // namespace AWS

#endif
