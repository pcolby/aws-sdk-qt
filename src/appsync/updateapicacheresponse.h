// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPICACHERESPONSE_H
#define QTAWS_UPDATEAPICACHERESPONSE_H

#include "appsyncresponse.h"
#include "updateapicacherequest.h"

namespace QtAws {
namespace AppSync {

class UpdateApiCacheResponsePrivate;

class QTAWSAPPSYNC_EXPORT UpdateApiCacheResponse : public AppSyncResponse {
    Q_OBJECT

public:
    UpdateApiCacheResponse(const UpdateApiCacheRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateApiCacheRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApiCacheResponse)
    Q_DISABLE_COPY(UpdateApiCacheResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
