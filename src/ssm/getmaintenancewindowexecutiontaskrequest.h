// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAINTENANCEWINDOWEXECUTIONTASKREQUEST_H
#define QTAWS_GETMAINTENANCEWINDOWEXECUTIONTASKREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetMaintenanceWindowExecutionTaskRequestPrivate;

class QTAWSSSM_EXPORT GetMaintenanceWindowExecutionTaskRequest : public SsmRequest {

public:
    GetMaintenanceWindowExecutionTaskRequest(const GetMaintenanceWindowExecutionTaskRequest &other);
    GetMaintenanceWindowExecutionTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMaintenanceWindowExecutionTaskRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
