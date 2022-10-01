// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONDEPENDENCIESREQUEST_P_H
#define QTAWS_LISTAPPLICATIONDEPENDENCIESREQUEST_P_H

#include "serverlessapplicationrepositoryrequest_p.h"
#include "listapplicationdependenciesrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class ListApplicationDependenciesRequest;

class ListApplicationDependenciesRequestPrivate : public ServerlessApplicationRepositoryRequestPrivate {

public:
    ListApplicationDependenciesRequestPrivate(const ServerlessApplicationRepositoryRequest::Action action,
                                   ListApplicationDependenciesRequest * const q);
    ListApplicationDependenciesRequestPrivate(const ListApplicationDependenciesRequestPrivate &other,
                                   ListApplicationDependenciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListApplicationDependenciesRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
