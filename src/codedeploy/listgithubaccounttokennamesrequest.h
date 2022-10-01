// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGITHUBACCOUNTTOKENNAMESREQUEST_H
#define QTAWS_LISTGITHUBACCOUNTTOKENNAMESREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListGitHubAccountTokenNamesRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT ListGitHubAccountTokenNamesRequest : public CodeDeployRequest {

public:
    ListGitHubAccountTokenNamesRequest(const ListGitHubAccountTokenNamesRequest &other);
    ListGitHubAccountTokenNamesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGitHubAccountTokenNamesRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
