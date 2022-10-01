// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENROLLMENTSTATUSREQUEST_H
#define QTAWS_UPDATEENROLLMENTSTATUSREQUEST_H

#include "computeoptimizerrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class UpdateEnrollmentStatusRequestPrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT UpdateEnrollmentStatusRequest : public ComputeOptimizerRequest {

public:
    UpdateEnrollmentStatusRequest(const UpdateEnrollmentStatusRequest &other);
    UpdateEnrollmentStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEnrollmentStatusRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
