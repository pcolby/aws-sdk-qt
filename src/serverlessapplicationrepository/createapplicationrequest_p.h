// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONREQUEST_P_H
#define QTAWS_CREATEAPPLICATIONREQUEST_P_H

#include "serverlessapplicationrepositoryrequest_p.h"
#include "createapplicationrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class CreateApplicationRequest;

class CreateApplicationRequestPrivate : public ServerlessApplicationRepositoryRequestPrivate {

public:
    CreateApplicationRequestPrivate(const ServerlessApplicationRepositoryRequest::Action action,
                                   CreateApplicationRequest * const q);
    CreateApplicationRequestPrivate(const CreateApplicationRequestPrivate &other,
                                   CreateApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateApplicationRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
