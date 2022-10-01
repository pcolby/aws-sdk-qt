// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAINTENANCEWINDOWTASKREQUEST_H
#define QTAWS_UPDATEMAINTENANCEWINDOWTASKREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateMaintenanceWindowTaskRequestPrivate;

class QTAWSSSM_EXPORT UpdateMaintenanceWindowTaskRequest : public SsmRequest {

public:
    UpdateMaintenanceWindowTaskRequest(const UpdateMaintenanceWindowTaskRequest &other);
    UpdateMaintenanceWindowTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMaintenanceWindowTaskRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
