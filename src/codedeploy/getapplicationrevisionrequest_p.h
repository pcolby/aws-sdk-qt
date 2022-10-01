// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONREVISIONREQUEST_P_H
#define QTAWS_GETAPPLICATIONREVISIONREQUEST_P_H

#include "codedeployrequest_p.h"
#include "getapplicationrevisionrequest.h"

namespace QtAws {
namespace CodeDeploy {

class GetApplicationRevisionRequest;

class GetApplicationRevisionRequestPrivate : public CodeDeployRequestPrivate {

public:
    GetApplicationRevisionRequestPrivate(const CodeDeployRequest::Action action,
                                   GetApplicationRevisionRequest * const q);
    GetApplicationRevisionRequestPrivate(const GetApplicationRevisionRequestPrivate &other,
                                   GetApplicationRevisionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApplicationRevisionRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
