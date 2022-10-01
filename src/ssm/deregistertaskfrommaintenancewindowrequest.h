// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTASKFROMMAINTENANCEWINDOWREQUEST_H
#define QTAWS_DEREGISTERTASKFROMMAINTENANCEWINDOWREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DeregisterTaskFromMaintenanceWindowRequestPrivate;

class QTAWSSSM_EXPORT DeregisterTaskFromMaintenanceWindowRequest : public SsmRequest {

public:
    DeregisterTaskFromMaintenanceWindowRequest(const DeregisterTaskFromMaintenanceWindowRequest &other);
    DeregisterTaskFromMaintenanceWindowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterTaskFromMaintenanceWindowRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
