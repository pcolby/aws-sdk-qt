// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGITHUBACCOUNTTOKENRESPONSE_H
#define QTAWS_DELETEGITHUBACCOUNTTOKENRESPONSE_H

#include "codedeployresponse.h"
#include "deletegithubaccounttokenrequest.h"

namespace QtAws {
namespace CodeDeploy {

class DeleteGitHubAccountTokenResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT DeleteGitHubAccountTokenResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    DeleteGitHubAccountTokenResponse(const DeleteGitHubAccountTokenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteGitHubAccountTokenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGitHubAccountTokenResponse)
    Q_DISABLE_COPY(DeleteGitHubAccountTokenResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
