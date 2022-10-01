// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTREQUEST_H
#define QTAWS_CREATEDEPLOYMENTREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class CreateDeploymentRequestPrivate;

class QTAWSOPSWORKS_EXPORT CreateDeploymentRequest : public OpsWorksRequest {

public:
    CreateDeploymentRequest(const CreateDeploymentRequest &other);
    CreateDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeploymentRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
