// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAINTENANCEWINDOWEXECUTIONTASKINVOCATIONREQUEST_H
#define QTAWS_GETMAINTENANCEWINDOWEXECUTIONTASKINVOCATIONREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetMaintenanceWindowExecutionTaskInvocationRequestPrivate;

class QTAWSSSM_EXPORT GetMaintenanceWindowExecutionTaskInvocationRequest : public SsmRequest {

public:
    GetMaintenanceWindowExecutionTaskInvocationRequest(const GetMaintenanceWindowExecutionTaskInvocationRequest &other);
    GetMaintenanceWindowExecutionTaskInvocationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMaintenanceWindowExecutionTaskInvocationRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
