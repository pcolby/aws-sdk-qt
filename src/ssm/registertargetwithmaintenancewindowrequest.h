// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTARGETWITHMAINTENANCEWINDOWREQUEST_H
#define QTAWS_REGISTERTARGETWITHMAINTENANCEWINDOWREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class RegisterTargetWithMaintenanceWindowRequestPrivate;

class QTAWSSSM_EXPORT RegisterTargetWithMaintenanceWindowRequest : public SsmRequest {

public:
    RegisterTargetWithMaintenanceWindowRequest(const RegisterTargetWithMaintenanceWindowRequest &other);
    RegisterTargetWithMaintenanceWindowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterTargetWithMaintenanceWindowRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
