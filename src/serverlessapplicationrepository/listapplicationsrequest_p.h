// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONSREQUEST_P_H
#define QTAWS_LISTAPPLICATIONSREQUEST_P_H

#include "serverlessapplicationrepositoryrequest_p.h"
#include "listapplicationsrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class ListApplicationsRequest;

class ListApplicationsRequestPrivate : public ServerlessApplicationRepositoryRequestPrivate {

public:
    ListApplicationsRequestPrivate(const ServerlessApplicationRepositoryRequest::Action action,
                                   ListApplicationsRequest * const q);
    ListApplicationsRequestPrivate(const ListApplicationsRequestPrivate &other,
                                   ListApplicationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListApplicationsRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
