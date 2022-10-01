// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTEXPORTJOBSRESPONSE_H
#define QTAWS_GETSEGMENTEXPORTJOBSRESPONSE_H

#include "pinpointresponse.h"
#include "getsegmentexportjobsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetSegmentExportJobsResponsePrivate;

class QTAWSPINPOINT_EXPORT GetSegmentExportJobsResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetSegmentExportJobsResponse(const GetSegmentExportJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSegmentExportJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSegmentExportJobsResponse)
    Q_DISABLE_COPY(GetSegmentExportJobsResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
