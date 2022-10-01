// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTOPICSDETECTIONJOBSRESPONSE_H
#define QTAWS_LISTTOPICSDETECTIONJOBSRESPONSE_H

#include "comprehendresponse.h"
#include "listtopicsdetectionjobsrequest.h"

namespace QtAws {
namespace Comprehend {

class ListTopicsDetectionJobsResponsePrivate;

class QTAWSCOMPREHEND_EXPORT ListTopicsDetectionJobsResponse : public ComprehendResponse {
    Q_OBJECT

public:
    ListTopicsDetectionJobsResponse(const ListTopicsDetectionJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTopicsDetectionJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTopicsDetectionJobsResponse)
    Q_DISABLE_COPY(ListTopicsDetectionJobsResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
