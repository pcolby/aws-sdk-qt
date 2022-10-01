// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELENVIRONMENTDEPLOYMENTREQUEST_H
#define QTAWS_CANCELENVIRONMENTDEPLOYMENTREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class CancelEnvironmentDeploymentRequestPrivate;

class QTAWSPROTON_EXPORT CancelEnvironmentDeploymentRequest : public ProtonRequest {

public:
    CancelEnvironmentDeploymentRequest(const CancelEnvironmentDeploymentRequest &other);
    CancelEnvironmentDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelEnvironmentDeploymentRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
