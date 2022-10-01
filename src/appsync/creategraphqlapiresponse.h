// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGRAPHQLAPIRESPONSE_H
#define QTAWS_CREATEGRAPHQLAPIRESPONSE_H

#include "appsyncresponse.h"
#include "creategraphqlapirequest.h"

namespace QtAws {
namespace AppSync {

class CreateGraphqlApiResponsePrivate;

class QTAWSAPPSYNC_EXPORT CreateGraphqlApiResponse : public AppSyncResponse {
    Q_OBJECT

public:
    CreateGraphqlApiResponse(const CreateGraphqlApiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGraphqlApiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGraphqlApiResponse)
    Q_DISABLE_COPY(CreateGraphqlApiResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
