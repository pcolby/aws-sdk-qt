// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONDEPENDENCIESRESPONSE_H
#define QTAWS_LISTAPPLICATIONDEPENDENCIESRESPONSE_H

#include "serverlessapplicationrepositoryresponse.h"
#include "listapplicationdependenciesrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class ListApplicationDependenciesResponsePrivate;

class QTAWSSERVERLESSAPPLICATIONREPOSITORY_EXPORT ListApplicationDependenciesResponse : public ServerlessApplicationRepositoryResponse {
    Q_OBJECT

public:
    ListApplicationDependenciesResponse(const ListApplicationDependenciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListApplicationDependenciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApplicationDependenciesResponse)
    Q_DISABLE_COPY(ListApplicationDependenciesResponse)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
