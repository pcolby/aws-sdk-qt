// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REFRESHCACHERESPONSE_H
#define QTAWS_REFRESHCACHERESPONSE_H

#include "storagegatewayresponse.h"
#include "refreshcacherequest.h"

namespace QtAws {
namespace StorageGateway {

class RefreshCacheResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT RefreshCacheResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    RefreshCacheResponse(const RefreshCacheRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RefreshCacheRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RefreshCacheResponse)
    Q_DISABLE_COPY(RefreshCacheResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
