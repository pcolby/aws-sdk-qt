// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSERVICEPIPELINEDEPLOYMENTREQUEST_H
#define QTAWS_CANCELSERVICEPIPELINEDEPLOYMENTREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class CancelServicePipelineDeploymentRequestPrivate;

class QTAWSPROTON_EXPORT CancelServicePipelineDeploymentRequest : public ProtonRequest {

public:
    CancelServicePipelineDeploymentRequest(const CancelServicePipelineDeploymentRequest &other);
    CancelServicePipelineDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelServicePipelineDeploymentRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
