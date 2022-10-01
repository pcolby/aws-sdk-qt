// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENROLLMENTSTATUSREQUEST_H
#define QTAWS_GETENROLLMENTSTATUSREQUEST_H

#include "computeoptimizerrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEnrollmentStatusRequestPrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT GetEnrollmentStatusRequest : public ComputeOptimizerRequest {

public:
    GetEnrollmentStatusRequest(const GetEnrollmentStatusRequest &other);
    GetEnrollmentStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEnrollmentStatusRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
