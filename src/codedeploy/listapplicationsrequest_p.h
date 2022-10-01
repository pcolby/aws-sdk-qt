// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONSREQUEST_P_H
#define QTAWS_LISTAPPLICATIONSREQUEST_P_H

#include "codedeployrequest_p.h"
#include "listapplicationsrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListApplicationsRequest;

class ListApplicationsRequestPrivate : public CodeDeployRequestPrivate {

public:
    ListApplicationsRequestPrivate(const CodeDeployRequest::Action action,
                                   ListApplicationsRequest * const q);
    ListApplicationsRequestPrivate(const ListApplicationsRequestPrivate &other,
                                   ListApplicationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListApplicationsRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
