// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYRESOURCEDEPLOYMENTSTATUSCHANGEREQUEST_H
#define QTAWS_NOTIFYRESOURCEDEPLOYMENTSTATUSCHANGEREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class NotifyResourceDeploymentStatusChangeRequestPrivate;

class QTAWSPROTON_EXPORT NotifyResourceDeploymentStatusChangeRequest : public ProtonRequest {

public:
    NotifyResourceDeploymentStatusChangeRequest(const NotifyResourceDeploymentStatusChangeRequest &other);
    NotifyResourceDeploymentStatusChangeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(NotifyResourceDeploymentStatusChangeRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
