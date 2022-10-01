// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTJOBRESPONSE_H
#define QTAWS_CREATEDEPLOYMENTJOBRESPONSE_H

#include "robomakerresponse.h"
#include "createdeploymentjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateDeploymentJobResponsePrivate;

class QTAWSROBOMAKER_EXPORT CreateDeploymentJobResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    CreateDeploymentJobResponse(const CreateDeploymentJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDeploymentJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeploymentJobResponse)
    Q_DISABLE_COPY(CreateDeploymentJobResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
