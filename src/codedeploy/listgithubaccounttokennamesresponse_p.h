// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGITHUBACCOUNTTOKENNAMESRESPONSE_P_H
#define QTAWS_LISTGITHUBACCOUNTTOKENNAMESRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class ListGitHubAccountTokenNamesResponse;

class ListGitHubAccountTokenNamesResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit ListGitHubAccountTokenNamesResponsePrivate(ListGitHubAccountTokenNamesResponse * const q);

    void parseListGitHubAccountTokenNamesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGitHubAccountTokenNamesResponse)
    Q_DISABLE_COPY(ListGitHubAccountTokenNamesResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
