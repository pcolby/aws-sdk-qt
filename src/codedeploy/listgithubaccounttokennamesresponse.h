// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGITHUBACCOUNTTOKENNAMESRESPONSE_H
#define QTAWS_LISTGITHUBACCOUNTTOKENNAMESRESPONSE_H

#include "codedeployresponse.h"
#include "listgithubaccounttokennamesrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListGitHubAccountTokenNamesResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT ListGitHubAccountTokenNamesResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    ListGitHubAccountTokenNamesResponse(const ListGitHubAccountTokenNamesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGitHubAccountTokenNamesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGitHubAccountTokenNamesResponse)
    Q_DISABLE_COPY(ListGitHubAccountTokenNamesResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
