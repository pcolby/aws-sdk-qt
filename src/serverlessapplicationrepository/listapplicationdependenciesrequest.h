// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONDEPENDENCIESREQUEST_H
#define QTAWS_LISTAPPLICATIONDEPENDENCIESREQUEST_H

#include "serverlessapplicationrepositoryrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class ListApplicationDependenciesRequestPrivate;

class QTAWSSERVERLESSAPPLICATIONREPOSITORY_EXPORT ListApplicationDependenciesRequest : public ServerlessApplicationRepositoryRequest {

public:
    ListApplicationDependenciesRequest(const ListApplicationDependenciesRequest &other);
    ListApplicationDependenciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApplicationDependenciesRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
