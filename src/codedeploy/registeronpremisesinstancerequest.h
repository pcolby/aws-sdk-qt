// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERONPREMISESINSTANCEREQUEST_H
#define QTAWS_REGISTERONPREMISESINSTANCEREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class RegisterOnPremisesInstanceRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT RegisterOnPremisesInstanceRequest : public CodeDeployRequest {

public:
    RegisterOnPremisesInstanceRequest(const RegisterOnPremisesInstanceRequest &other);
    RegisterOnPremisesInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterOnPremisesInstanceRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
