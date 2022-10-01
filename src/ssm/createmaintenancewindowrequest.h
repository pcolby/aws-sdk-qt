// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMAINTENANCEWINDOWREQUEST_H
#define QTAWS_CREATEMAINTENANCEWINDOWREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class CreateMaintenanceWindowRequestPrivate;

class QTAWSSSM_EXPORT CreateMaintenanceWindowRequest : public SsmRequest {

public:
    CreateMaintenanceWindowRequest(const CreateMaintenanceWindowRequest &other);
    CreateMaintenanceWindowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMaintenanceWindowRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
