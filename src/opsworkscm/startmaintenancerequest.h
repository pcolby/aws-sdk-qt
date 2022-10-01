// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMAINTENANCEREQUEST_H
#define QTAWS_STARTMAINTENANCEREQUEST_H

#include "opsworkscmrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class StartMaintenanceRequestPrivate;

class QTAWSOPSWORKSCM_EXPORT StartMaintenanceRequest : public OpsWorksCmRequest {

public:
    StartMaintenanceRequest(const StartMaintenanceRequest &other);
    StartMaintenanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMaintenanceRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
