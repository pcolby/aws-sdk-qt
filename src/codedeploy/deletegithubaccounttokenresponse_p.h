// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGITHUBACCOUNTTOKENRESPONSE_P_H
#define QTAWS_DELETEGITHUBACCOUNTTOKENRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class DeleteGitHubAccountTokenResponse;

class DeleteGitHubAccountTokenResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit DeleteGitHubAccountTokenResponsePrivate(DeleteGitHubAccountTokenResponse * const q);

    void parseDeleteGitHubAccountTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGitHubAccountTokenResponse)
    Q_DISABLE_COPY(DeleteGitHubAccountTokenResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
