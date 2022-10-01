// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPICACHERESPONSE_H
#define QTAWS_DELETEAPICACHERESPONSE_H

#include "appsyncresponse.h"
#include "deleteapicacherequest.h"

namespace QtAws {
namespace AppSync {

class DeleteApiCacheResponsePrivate;

class QTAWSAPPSYNC_EXPORT DeleteApiCacheResponse : public AppSyncResponse {
    Q_OBJECT

public:
    DeleteApiCacheResponse(const DeleteApiCacheRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteApiCacheRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApiCacheResponse)
    Q_DISABLE_COPY(DeleteApiCacheResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
