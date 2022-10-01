// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITIESDETECTIONJOBSRESPONSE_H
#define QTAWS_LISTENTITIESDETECTIONJOBSRESPONSE_H

#include "comprehendresponse.h"
#include "listentitiesdetectionjobsrequest.h"

namespace QtAws {
namespace Comprehend {

class ListEntitiesDetectionJobsResponsePrivate;

class QTAWSCOMPREHEND_EXPORT ListEntitiesDetectionJobsResponse : public ComprehendResponse {
    Q_OBJECT

public:
    ListEntitiesDetectionJobsResponse(const ListEntitiesDetectionJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEntitiesDetectionJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEntitiesDetectionJobsResponse)
    Q_DISABLE_COPY(ListEntitiesDetectionJobsResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
