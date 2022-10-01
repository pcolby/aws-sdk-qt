// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPHIDETECTIONJOBRESPONSE_H
#define QTAWS_STOPPHIDETECTIONJOBRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "stopphidetectionjobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StopPHIDetectionJobResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT StopPHIDetectionJobResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    StopPHIDetectionJobResponse(const StopPHIDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopPHIDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopPHIDetectionJobResponse)
    Q_DISABLE_COPY(StopPHIDetectionJobResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
