// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENROLLMENTSTATUSESFORORGANIZATIONREQUEST_H
#define QTAWS_GETENROLLMENTSTATUSESFORORGANIZATIONREQUEST_H

#include "computeoptimizerrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEnrollmentStatusesForOrganizationRequestPrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT GetEnrollmentStatusesForOrganizationRequest : public ComputeOptimizerRequest {

public:
    GetEnrollmentStatusesForOrganizationRequest(const GetEnrollmentStatusesForOrganizationRequest &other);
    GetEnrollmentStatusesForOrganizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEnrollmentStatusesForOrganizationRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
