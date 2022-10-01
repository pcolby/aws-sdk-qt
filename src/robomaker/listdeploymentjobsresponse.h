// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTJOBSRESPONSE_H
#define QTAWS_LISTDEPLOYMENTJOBSRESPONSE_H

#include "robomakerresponse.h"
#include "listdeploymentjobsrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListDeploymentJobsResponsePrivate;

class QTAWSROBOMAKER_EXPORT ListDeploymentJobsResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    ListDeploymentJobsResponse(const ListDeploymentJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDeploymentJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeploymentJobsResponse)
    Q_DISABLE_COPY(ListDeploymentJobsResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
