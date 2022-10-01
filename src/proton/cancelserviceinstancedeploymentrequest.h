// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSERVICEINSTANCEDEPLOYMENTREQUEST_H
#define QTAWS_CANCELSERVICEINSTANCEDEPLOYMENTREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class CancelServiceInstanceDeploymentRequestPrivate;

class QTAWSPROTON_EXPORT CancelServiceInstanceDeploymentRequest : public ProtonRequest {

public:
    CancelServiceInstanceDeploymentRequest(const CancelServiceInstanceDeploymentRequest &other);
    CancelServiceInstanceDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelServiceInstanceDeploymentRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
