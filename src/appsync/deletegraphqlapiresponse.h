// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGRAPHQLAPIRESPONSE_H
#define QTAWS_DELETEGRAPHQLAPIRESPONSE_H

#include "appsyncresponse.h"
#include "deletegraphqlapirequest.h"

namespace QtAws {
namespace AppSync {

class DeleteGraphqlApiResponsePrivate;

class QTAWSAPPSYNC_EXPORT DeleteGraphqlApiResponse : public AppSyncResponse {
    Q_OBJECT

public:
    DeleteGraphqlApiResponse(const DeleteGraphqlApiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteGraphqlApiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGraphqlApiResponse)
    Q_DISABLE_COPY(DeleteGraphqlApiResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
