// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPHIDETECTIONJOBREQUEST_H
#define QTAWS_STARTPHIDETECTIONJOBREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StartPHIDetectionJobRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT StartPHIDetectionJobRequest : public ComprehendMedicalRequest {

public:
    StartPHIDetectionJobRequest(const StartPHIDetectionJobRequest &other);
    StartPHIDetectionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartPHIDetectionJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
