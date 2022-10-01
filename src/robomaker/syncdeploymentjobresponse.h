// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SYNCDEPLOYMENTJOBRESPONSE_H
#define QTAWS_SYNCDEPLOYMENTJOBRESPONSE_H

#include "robomakerresponse.h"
#include "syncdeploymentjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class SyncDeploymentJobResponsePrivate;

class QTAWSROBOMAKER_EXPORT SyncDeploymentJobResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    SyncDeploymentJobResponse(const SyncDeploymentJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SyncDeploymentJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SyncDeploymentJobResponse)
    Q_DISABLE_COPY(SyncDeploymentJobResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
