// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTSDETECTIONJOBSRESPONSE_H
#define QTAWS_LISTEVENTSDETECTIONJOBSRESPONSE_H

#include "comprehendresponse.h"
#include "listeventsdetectionjobsrequest.h"

namespace QtAws {
namespace Comprehend {

class ListEventsDetectionJobsResponsePrivate;

class QTAWSCOMPREHEND_EXPORT ListEventsDetectionJobsResponse : public ComprehendResponse {
    Q_OBJECT

public:
    ListEventsDetectionJobsResponse(const ListEventsDetectionJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEventsDetectionJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventsDetectionJobsResponse)
    Q_DISABLE_COPY(ListEventsDetectionJobsResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
