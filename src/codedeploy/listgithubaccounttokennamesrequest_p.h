/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTGITHUBACCOUNTTOKENNAMESREQUEST_P_H
#define QTAWS_LISTGITHUBACCOUNTTOKENNAMESREQUEST_P_H

#include "codedeploy_p.h"
#include "listgithubaccounttokennamesrequest.h"

namespace AWS {

namespace CodeDeploy {

class ListGitHubAccountTokenNamesRequest;

class QTAWS_EXPORT ListGitHubAccountTokenNamesRequestPrivate : public CodeDeployPrivate {

public:
    ListGitHubAccountTokenNamesRequestPrivate(const CodeDeploy::Action action,
                                   ListGitHubAccountTokenNamesRequest * const q);
    ListGitHubAccountTokenNamesRequestPrivate(const ListGitHubAccountTokenNamesRequestPrivate &other,
                                   ListGitHubAccountTokenNamesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGitHubAccountTokenNamesRequest)

};

} // namespace CodeDeploy
} // namespace AWS

#endif
