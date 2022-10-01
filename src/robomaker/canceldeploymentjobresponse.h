// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELDEPLOYMENTJOBRESPONSE_H
#define QTAWS_CANCELDEPLOYMENTJOBRESPONSE_H

#include "robomakerresponse.h"
#include "canceldeploymentjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class CancelDeploymentJobResponsePrivate;

class QTAWSROBOMAKER_EXPORT CancelDeploymentJobResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    CancelDeploymentJobResponse(const CancelDeploymentJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelDeploymentJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelDeploymentJobResponse)
    Q_DISABLE_COPY(CancelDeploymentJobResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
