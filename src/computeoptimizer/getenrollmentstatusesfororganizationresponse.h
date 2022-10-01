// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENROLLMENTSTATUSESFORORGANIZATIONRESPONSE_H
#define QTAWS_GETENROLLMENTSTATUSESFORORGANIZATIONRESPONSE_H

#include "computeoptimizerresponse.h"
#include "getenrollmentstatusesfororganizationrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEnrollmentStatusesForOrganizationResponsePrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT GetEnrollmentStatusesForOrganizationResponse : public ComputeOptimizerResponse {
    Q_OBJECT

public:
    GetEnrollmentStatusesForOrganizationResponse(const GetEnrollmentStatusesForOrganizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEnrollmentStatusesForOrganizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEnrollmentStatusesForOrganizationResponse)
    Q_DISABLE_COPY(GetEnrollmentStatusesForOrganizationResponse)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
