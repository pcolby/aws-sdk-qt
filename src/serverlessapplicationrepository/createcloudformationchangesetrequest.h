// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLOUDFORMATIONCHANGESETREQUEST_H
#define QTAWS_CREATECLOUDFORMATIONCHANGESETREQUEST_H

#include "serverlessapplicationrepositoryrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class CreateCloudFormationChangeSetRequestPrivate;

class QTAWSSERVERLESSAPPLICATIONREPOSITORY_EXPORT CreateCloudFormationChangeSetRequest : public ServerlessApplicationRepositoryRequest {

public:
    CreateCloudFormationChangeSetRequest(const CreateCloudFormationChangeSetRequest &other);
    CreateCloudFormationChangeSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCloudFormationChangeSetRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
