// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGITHUBACCOUNTTOKENNAMESREQUEST_P_H
#define QTAWS_LISTGITHUBACCOUNTTOKENNAMESREQUEST_P_H

#include "codedeployrequest_p.h"
#include "listgithubaccounttokennamesrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListGitHubAccountTokenNamesRequest;

class ListGitHubAccountTokenNamesRequestPrivate : public CodeDeployRequestPrivate {

public:
    ListGitHubAccountTokenNamesRequestPrivate(const CodeDeployRequest::Action action,
                                   ListGitHubAccountTokenNamesRequest * const q);
    ListGitHubAccountTokenNamesRequestPrivate(const ListGitHubAccountTokenNamesRequestPrivate &other,
                                   ListGitHubAccountTokenNamesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGitHubAccountTokenNamesRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
