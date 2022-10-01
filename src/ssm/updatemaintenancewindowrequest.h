// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAINTENANCEWINDOWREQUEST_H
#define QTAWS_UPDATEMAINTENANCEWINDOWREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateMaintenanceWindowRequestPrivate;

class QTAWSSSM_EXPORT UpdateMaintenanceWindowRequest : public SsmRequest {

public:
    UpdateMaintenanceWindowRequest(const UpdateMaintenanceWindowRequest &other);
    UpdateMaintenanceWindowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMaintenanceWindowRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
