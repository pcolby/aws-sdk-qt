// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELMAINTENANCEWINDOWEXECUTIONREQUEST_H
#define QTAWS_CANCELMAINTENANCEWINDOWEXECUTIONREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class CancelMaintenanceWindowExecutionRequestPrivate;

class QTAWSSSM_EXPORT CancelMaintenanceWindowExecutionRequest : public SsmRequest {

public:
    CancelMaintenanceWindowExecutionRequest(const CancelMaintenanceWindowExecutionRequest &other);
    CancelMaintenanceWindowExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelMaintenanceWindowExecutionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
