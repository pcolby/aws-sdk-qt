// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETCACHERESPONSE_H
#define QTAWS_RESETCACHERESPONSE_H

#include "storagegatewayresponse.h"
#include "resetcacherequest.h"

namespace QtAws {
namespace StorageGateway {

class ResetCacheResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT ResetCacheResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    ResetCacheResponse(const ResetCacheRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResetCacheRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetCacheResponse)
    Q_DISABLE_COPY(ResetCacheResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
