// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETONPREMISESINSTANCEREQUEST_H
#define QTAWS_GETONPREMISESINSTANCEREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class GetOnPremisesInstanceRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT GetOnPremisesInstanceRequest : public CodeDeployRequest {

public:
    GetOnPremisesInstanceRequest(const GetOnPremisesInstanceRequest &other);
    GetOnPremisesInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOnPremisesInstanceRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
