// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPHIDETECTIONJOBRESPONSE_H
#define QTAWS_STARTPHIDETECTIONJOBRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "startphidetectionjobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StartPHIDetectionJobResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT StartPHIDetectionJobResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    StartPHIDetectionJobResponse(const StartPHIDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartPHIDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartPHIDetectionJobResponse)
    Q_DISABLE_COPY(StartPHIDetectionJobResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
