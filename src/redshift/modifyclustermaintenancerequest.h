// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERMAINTENANCEREQUEST_H
#define QTAWS_MODIFYCLUSTERMAINTENANCEREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterMaintenanceRequestPrivate;

class QTAWSREDSHIFT_EXPORT ModifyClusterMaintenanceRequest : public RedshiftRequest {

public:
    ModifyClusterMaintenanceRequest(const ModifyClusterMaintenanceRequest &other);
    ModifyClusterMaintenanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyClusterMaintenanceRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
