// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAINTENANCEWINDOWREQUEST_H
#define QTAWS_GETMAINTENANCEWINDOWREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetMaintenanceWindowRequestPrivate;

class QTAWSSSM_EXPORT GetMaintenanceWindowRequest : public SsmRequest {

public:
    GetMaintenanceWindowRequest(const GetMaintenanceWindowRequest &other);
    GetMaintenanceWindowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMaintenanceWindowRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
