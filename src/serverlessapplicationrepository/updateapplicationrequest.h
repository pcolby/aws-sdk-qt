// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONREQUEST_H
#define QTAWS_UPDATEAPPLICATIONREQUEST_H

#include "serverlessapplicationrepositoryrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class UpdateApplicationRequestPrivate;

class QTAWSSERVERLESSAPPLICATIONREPOSITORY_EXPORT UpdateApplicationRequest : public ServerlessApplicationRepositoryRequest {

public:
    UpdateApplicationRequest(const UpdateApplicationRequest &other);
    UpdateApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApplicationRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
