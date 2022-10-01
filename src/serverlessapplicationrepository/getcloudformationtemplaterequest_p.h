// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLOUDFORMATIONTEMPLATEREQUEST_P_H
#define QTAWS_GETCLOUDFORMATIONTEMPLATEREQUEST_P_H

#include "serverlessapplicationrepositoryrequest_p.h"
#include "getcloudformationtemplaterequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class GetCloudFormationTemplateRequest;

class GetCloudFormationTemplateRequestPrivate : public ServerlessApplicationRepositoryRequestPrivate {

public:
    GetCloudFormationTemplateRequestPrivate(const ServerlessApplicationRepositoryRequest::Action action,
                                   GetCloudFormationTemplateRequest * const q);
    GetCloudFormationTemplateRequestPrivate(const GetCloudFormationTemplateRequestPrivate &other,
                                   GetCloudFormationTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCloudFormationTemplateRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
