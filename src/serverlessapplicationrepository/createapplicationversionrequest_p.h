// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONVERSIONREQUEST_P_H
#define QTAWS_CREATEAPPLICATIONVERSIONREQUEST_P_H

#include "serverlessapplicationrepositoryrequest_p.h"
#include "createapplicationversionrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class CreateApplicationVersionRequest;

class CreateApplicationVersionRequestPrivate : public ServerlessApplicationRepositoryRequestPrivate {

public:
    CreateApplicationVersionRequestPrivate(const ServerlessApplicationRepositoryRequest::Action action,
                                   CreateApplicationVersionRequest * const q);
    CreateApplicationVersionRequestPrivate(const CreateApplicationVersionRequestPrivate &other,
                                   CreateApplicationVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateApplicationVersionRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
