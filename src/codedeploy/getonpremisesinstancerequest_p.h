// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETONPREMISESINSTANCEREQUEST_P_H
#define QTAWS_GETONPREMISESINSTANCEREQUEST_P_H

#include "codedeployrequest_p.h"
#include "getonpremisesinstancerequest.h"

namespace QtAws {
namespace CodeDeploy {

class GetOnPremisesInstanceRequest;

class GetOnPremisesInstanceRequestPrivate : public CodeDeployRequestPrivate {

public:
    GetOnPremisesInstanceRequestPrivate(const CodeDeployRequest::Action action,
                                   GetOnPremisesInstanceRequest * const q);
    GetOnPremisesInstanceRequestPrivate(const GetOnPremisesInstanceRequestPrivate &other,
                                   GetOnPremisesInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOnPremisesInstanceRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
