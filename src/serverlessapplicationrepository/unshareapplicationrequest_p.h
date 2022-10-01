// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNSHAREAPPLICATIONREQUEST_P_H
#define QTAWS_UNSHAREAPPLICATIONREQUEST_P_H

#include "serverlessapplicationrepositoryrequest_p.h"
#include "unshareapplicationrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class UnshareApplicationRequest;

class UnshareApplicationRequestPrivate : public ServerlessApplicationRepositoryRequestPrivate {

public:
    UnshareApplicationRequestPrivate(const ServerlessApplicationRepositoryRequest::Action action,
                                   UnshareApplicationRequest * const q);
    UnshareApplicationRequestPrivate(const UnshareApplicationRequestPrivate &other,
                                   UnshareApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UnshareApplicationRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
