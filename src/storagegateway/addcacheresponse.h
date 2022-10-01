// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDCACHERESPONSE_H
#define QTAWS_ADDCACHERESPONSE_H

#include "storagegatewayresponse.h"
#include "addcacherequest.h"

namespace QtAws {
namespace StorageGateway {

class AddCacheResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT AddCacheResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    AddCacheResponse(const AddCacheRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddCacheRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddCacheResponse)
    Q_DISABLE_COPY(AddCacheResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
