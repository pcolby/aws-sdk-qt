// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FLUSHAPICACHERESPONSE_H
#define QTAWS_FLUSHAPICACHERESPONSE_H

#include "appsyncresponse.h"
#include "flushapicacherequest.h"

namespace QtAws {
namespace AppSync {

class FlushApiCacheResponsePrivate;

class QTAWSAPPSYNC_EXPORT FlushApiCacheResponse : public AppSyncResponse {
    Q_OBJECT

public:
    FlushApiCacheResponse(const FlushApiCacheRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const FlushApiCacheRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FlushApiCacheResponse)
    Q_DISABLE_COPY(FlushApiCacheResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
