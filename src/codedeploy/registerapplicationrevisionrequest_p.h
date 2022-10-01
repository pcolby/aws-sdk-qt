// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERAPPLICATIONREVISIONREQUEST_P_H
#define QTAWS_REGISTERAPPLICATIONREVISIONREQUEST_P_H

#include "codedeployrequest_p.h"
#include "registerapplicationrevisionrequest.h"

namespace QtAws {
namespace CodeDeploy {

class RegisterApplicationRevisionRequest;

class RegisterApplicationRevisionRequestPrivate : public CodeDeployRequestPrivate {

public:
    RegisterApplicationRevisionRequestPrivate(const CodeDeployRequest::Action action,
                                   RegisterApplicationRevisionRequest * const q);
    RegisterApplicationRevisionRequestPrivate(const RegisterApplicationRevisionRequestPrivate &other,
                                   RegisterApplicationRevisionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterApplicationRevisionRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
