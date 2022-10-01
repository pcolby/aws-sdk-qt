// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPENTITIESDETECTIONV2JOBRESPONSE_H
#define QTAWS_STOPENTITIESDETECTIONV2JOBRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "stopentitiesdetectionv2jobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StopEntitiesDetectionV2JobResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT StopEntitiesDetectionV2JobResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    StopEntitiesDetectionV2JobResponse(const StopEntitiesDetectionV2JobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopEntitiesDetectionV2JobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopEntitiesDetectionV2JobResponse)
    Q_DISABLE_COPY(StopEntitiesDetectionV2JobResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
