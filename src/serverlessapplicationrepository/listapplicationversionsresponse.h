// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONVERSIONSRESPONSE_H
#define QTAWS_LISTAPPLICATIONVERSIONSRESPONSE_H

#include "serverlessapplicationrepositoryresponse.h"
#include "listapplicationversionsrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class ListApplicationVersionsResponsePrivate;

class QTAWSSERVERLESSAPPLICATIONREPOSITORY_EXPORT ListApplicationVersionsResponse : public ServerlessApplicationRepositoryResponse {
    Q_OBJECT

public:
    ListApplicationVersionsResponse(const ListApplicationVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListApplicationVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApplicationVersionsResponse)
    Q_DISABLE_COPY(ListApplicationVersionsResponse)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
