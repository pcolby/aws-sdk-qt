// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTIMPORTJOBSRESPONSE_H
#define QTAWS_GETSEGMENTIMPORTJOBSRESPONSE_H

#include "pinpointresponse.h"
#include "getsegmentimportjobsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetSegmentImportJobsResponsePrivate;

class QTAWSPINPOINT_EXPORT GetSegmentImportJobsResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetSegmentImportJobsResponse(const GetSegmentImportJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSegmentImportJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSegmentImportJobsResponse)
    Q_DISABLE_COPY(GetSegmentImportJobsResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
