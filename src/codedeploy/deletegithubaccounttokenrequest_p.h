// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGITHUBACCOUNTTOKENREQUEST_P_H
#define QTAWS_DELETEGITHUBACCOUNTTOKENREQUEST_P_H

#include "codedeployrequest_p.h"
#include "deletegithubaccounttokenrequest.h"

namespace QtAws {
namespace CodeDeploy {

class DeleteGitHubAccountTokenRequest;

class DeleteGitHubAccountTokenRequestPrivate : public CodeDeployRequestPrivate {

public:
    DeleteGitHubAccountTokenRequestPrivate(const CodeDeployRequest::Action action,
                                   DeleteGitHubAccountTokenRequest * const q);
    DeleteGitHubAccountTokenRequestPrivate(const DeleteGitHubAccountTokenRequestPrivate &other,
                                   DeleteGitHubAccountTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGitHubAccountTokenRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
