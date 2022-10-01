// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLOUDFORMATIONTEMPLATEREQUEST_H
#define QTAWS_CREATECLOUDFORMATIONTEMPLATEREQUEST_H

#include "serverlessapplicationrepositoryrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class CreateCloudFormationTemplateRequestPrivate;

class QTAWSSERVERLESSAPPLICATIONREPOSITORY_EXPORT CreateCloudFormationTemplateRequest : public ServerlessApplicationRepositoryRequest {

public:
    CreateCloudFormationTemplateRequest(const CreateCloudFormationTemplateRequest &other);
    CreateCloudFormationTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCloudFormationTemplateRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
