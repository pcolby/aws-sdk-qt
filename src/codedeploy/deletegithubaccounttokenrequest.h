// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGITHUBACCOUNTTOKENREQUEST_H
#define QTAWS_DELETEGITHUBACCOUNTTOKENREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class DeleteGitHubAccountTokenRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT DeleteGitHubAccountTokenRequest : public CodeDeployRequest {

public:
    DeleteGitHubAccountTokenRequest(const DeleteGitHubAccountTokenRequest &other);
    DeleteGitHubAccountTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGitHubAccountTokenRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
