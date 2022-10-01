// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONREQUEST_P_H
#define QTAWS_GETAPPLICATIONREQUEST_P_H

#include "codedeployrequest_p.h"
#include "getapplicationrequest.h"

namespace QtAws {
namespace CodeDeploy {

class GetApplicationRequest;

class GetApplicationRequestPrivate : public CodeDeployRequestPrivate {

public:
    GetApplicationRequestPrivate(const CodeDeployRequest::Action action,
                                   GetApplicationRequest * const q);
    GetApplicationRequestPrivate(const GetApplicationRequestPrivate &other,
                                   GetApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApplicationRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
