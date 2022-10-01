// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPICACHERESPONSE_H
#define QTAWS_GETAPICACHERESPONSE_H

#include "appsyncresponse.h"
#include "getapicacherequest.h"

namespace QtAws {
namespace AppSync {

class GetApiCacheResponsePrivate;

class QTAWSAPPSYNC_EXPORT GetApiCacheResponse : public AppSyncResponse {
    Q_OBJECT

public:
    GetApiCacheResponse(const GetApiCacheRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApiCacheRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApiCacheResponse)
    Q_DISABLE_COPY(GetApiCacheResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
