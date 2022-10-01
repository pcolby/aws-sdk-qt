// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLOUDFORMATIONCHANGESETREQUEST_P_H
#define QTAWS_CREATECLOUDFORMATIONCHANGESETREQUEST_P_H

#include "serverlessapplicationrepositoryrequest_p.h"
#include "createcloudformationchangesetrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class CreateCloudFormationChangeSetRequest;

class CreateCloudFormationChangeSetRequestPrivate : public ServerlessApplicationRepositoryRequestPrivate {

public:
    CreateCloudFormationChangeSetRequestPrivate(const ServerlessApplicationRepositoryRequest::Action action,
                                   CreateCloudFormationChangeSetRequest * const q);
    CreateCloudFormationChangeSetRequestPrivate(const CreateCloudFormationChangeSetRequestPrivate &other,
                                   CreateCloudFormationChangeSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCloudFormationChangeSetRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
