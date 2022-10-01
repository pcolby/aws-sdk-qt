// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONREQUEST_P_H
#define QTAWS_GETAPPLICATIONREQUEST_P_H

#include "serverlessapplicationrepositoryrequest_p.h"
#include "getapplicationrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class GetApplicationRequest;

class GetApplicationRequestPrivate : public ServerlessApplicationRepositoryRequestPrivate {

public:
    GetApplicationRequestPrivate(const ServerlessApplicationRepositoryRequest::Action action,
                                   GetApplicationRequest * const q);
    GetApplicationRequestPrivate(const GetApplicationRequestPrivate &other,
                                   GetApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApplicationRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
