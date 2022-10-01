// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTENTITIESDETECTIONV2JOBRESPONSE_H
#define QTAWS_STARTENTITIESDETECTIONV2JOBRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "startentitiesdetectionv2jobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StartEntitiesDetectionV2JobResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT StartEntitiesDetectionV2JobResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    StartEntitiesDetectionV2JobResponse(const StartEntitiesDetectionV2JobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartEntitiesDetectionV2JobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartEntitiesDetectionV2JobResponse)
    Q_DISABLE_COPY(StartEntitiesDetectionV2JobResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
