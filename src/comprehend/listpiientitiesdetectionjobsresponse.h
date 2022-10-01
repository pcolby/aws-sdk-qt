// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIIENTITIESDETECTIONJOBSRESPONSE_H
#define QTAWS_LISTPIIENTITIESDETECTIONJOBSRESPONSE_H

#include "comprehendresponse.h"
#include "listpiientitiesdetectionjobsrequest.h"

namespace QtAws {
namespace Comprehend {

class ListPiiEntitiesDetectionJobsResponsePrivate;

class QTAWSCOMPREHEND_EXPORT ListPiiEntitiesDetectionJobsResponse : public ComprehendResponse {
    Q_OBJECT

public:
    ListPiiEntitiesDetectionJobsResponse(const ListPiiEntitiesDetectionJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPiiEntitiesDetectionJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPiiEntitiesDetectionJobsResponse)
    Q_DISABLE_COPY(ListPiiEntitiesDetectionJobsResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
