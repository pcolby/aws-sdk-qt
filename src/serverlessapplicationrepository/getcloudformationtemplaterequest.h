// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLOUDFORMATIONTEMPLATEREQUEST_H
#define QTAWS_GETCLOUDFORMATIONTEMPLATEREQUEST_H

#include "serverlessapplicationrepositoryrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class GetCloudFormationTemplateRequestPrivate;

class QTAWSSERVERLESSAPPLICATIONREPOSITORY_EXPORT GetCloudFormationTemplateRequest : public ServerlessApplicationRepositoryRequest {

public:
    GetCloudFormationTemplateRequest(const GetCloudFormationTemplateRequest &other);
    GetCloudFormationTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCloudFormationTemplateRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
