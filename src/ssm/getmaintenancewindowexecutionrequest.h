// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAINTENANCEWINDOWEXECUTIONREQUEST_H
#define QTAWS_GETMAINTENANCEWINDOWEXECUTIONREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetMaintenanceWindowExecutionRequestPrivate;

class QTAWSSSM_EXPORT GetMaintenanceWindowExecutionRequest : public SsmRequest {

public:
    GetMaintenanceWindowExecutionRequest(const GetMaintenanceWindowExecutionRequest &other);
    GetMaintenanceWindowExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMaintenanceWindowExecutionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
