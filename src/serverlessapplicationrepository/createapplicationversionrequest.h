// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONVERSIONREQUEST_H
#define QTAWS_CREATEAPPLICATIONVERSIONREQUEST_H

#include "serverlessapplicationrepositoryrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class CreateApplicationVersionRequestPrivate;

class QTAWSSERVERLESSAPPLICATIONREPOSITORY_EXPORT CreateApplicationVersionRequest : public ServerlessApplicationRepositoryRequest {

public:
    CreateApplicationVersionRequest(const CreateApplicationVersionRequest &other);
    CreateApplicationVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApplicationVersionRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
