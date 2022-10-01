// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPHIDETECTIONJOBREQUEST_H
#define QTAWS_STOPPHIDETECTIONJOBREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StopPHIDetectionJobRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT StopPHIDetectionJobRequest : public ComprehendMedicalRequest {

public:
    StopPHIDetectionJobRequest(const StopPHIDetectionJobRequest &other);
    StopPHIDetectionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopPHIDetectionJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
