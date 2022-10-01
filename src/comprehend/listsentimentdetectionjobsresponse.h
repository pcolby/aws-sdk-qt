// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSENTIMENTDETECTIONJOBSRESPONSE_H
#define QTAWS_LISTSENTIMENTDETECTIONJOBSRESPONSE_H

#include "comprehendresponse.h"
#include "listsentimentdetectionjobsrequest.h"

namespace QtAws {
namespace Comprehend {

class ListSentimentDetectionJobsResponsePrivate;

class QTAWSCOMPREHEND_EXPORT ListSentimentDetectionJobsResponse : public ComprehendResponse {
    Q_OBJECT

public:
    ListSentimentDetectionJobsResponse(const ListSentimentDetectionJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSentimentDetectionJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSentimentDetectionJobsResponse)
    Q_DISABLE_COPY(ListSentimentDetectionJobsResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
