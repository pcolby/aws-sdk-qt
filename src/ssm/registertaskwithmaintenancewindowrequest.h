// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTASKWITHMAINTENANCEWINDOWREQUEST_H
#define QTAWS_REGISTERTASKWITHMAINTENANCEWINDOWREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class RegisterTaskWithMaintenanceWindowRequestPrivate;

class QTAWSSSM_EXPORT RegisterTaskWithMaintenanceWindowRequest : public SsmRequest {

public:
    RegisterTaskWithMaintenanceWindowRequest(const RegisterTaskWithMaintenanceWindowRequest &other);
    RegisterTaskWithMaintenanceWindowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterTaskWithMaintenanceWindowRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
