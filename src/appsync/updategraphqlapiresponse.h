// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGRAPHQLAPIRESPONSE_H
#define QTAWS_UPDATEGRAPHQLAPIRESPONSE_H

#include "appsyncresponse.h"
#include "updategraphqlapirequest.h"

namespace QtAws {
namespace AppSync {

class UpdateGraphqlApiResponsePrivate;

class QTAWSAPPSYNC_EXPORT UpdateGraphqlApiResponse : public AppSyncResponse {
    Q_OBJECT

public:
    UpdateGraphqlApiResponse(const UpdateGraphqlApiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGraphqlApiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGraphqlApiResponse)
    Q_DISABLE_COPY(UpdateGraphqlApiResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
