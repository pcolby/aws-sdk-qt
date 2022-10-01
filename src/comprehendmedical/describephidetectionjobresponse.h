// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPHIDETECTIONJOBRESPONSE_H
#define QTAWS_DESCRIBEPHIDETECTIONJOBRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "describephidetectionjobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class DescribePHIDetectionJobResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT DescribePHIDetectionJobResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    DescribePHIDetectionJobResponse(const DescribePHIDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePHIDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePHIDetectionJobResponse)
    Q_DISABLE_COPY(DescribePHIDetectionJobResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
