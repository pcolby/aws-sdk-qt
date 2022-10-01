// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMAINTENANCEWINDOWREQUEST_H
#define QTAWS_DELETEMAINTENANCEWINDOWREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DeleteMaintenanceWindowRequestPrivate;

class QTAWSSSM_EXPORT DeleteMaintenanceWindowRequest : public SsmRequest {

public:
    DeleteMaintenanceWindowRequest(const DeleteMaintenanceWindowRequest &other);
    DeleteMaintenanceWindowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMaintenanceWindowRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
