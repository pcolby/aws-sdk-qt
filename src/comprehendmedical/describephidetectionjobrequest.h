// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPHIDETECTIONJOBREQUEST_H
#define QTAWS_DESCRIBEPHIDETECTIONJOBREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class DescribePHIDetectionJobRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT DescribePHIDetectionJobRequest : public ComprehendMedicalRequest {

public:
    DescribePHIDetectionJobRequest(const DescribePHIDetectionJobRequest &other);
    DescribePHIDetectionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePHIDetectionJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
