// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLOUDFORMATIONTEMPLATEREQUEST_P_H
#define QTAWS_CREATECLOUDFORMATIONTEMPLATEREQUEST_P_H

#include "serverlessapplicationrepositoryrequest_p.h"
#include "createcloudformationtemplaterequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class CreateCloudFormationTemplateRequest;

class CreateCloudFormationTemplateRequestPrivate : public ServerlessApplicationRepositoryRequestPrivate {

public:
    CreateCloudFormationTemplateRequestPrivate(const ServerlessApplicationRepositoryRequest::Action action,
                                   CreateCloudFormationTemplateRequest * const q);
    CreateCloudFormationTemplateRequestPrivate(const CreateCloudFormationTemplateRequestPrivate &other,
                                   CreateCloudFormationTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCloudFormationTemplateRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
