// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHERESPONSE_H
#define QTAWS_DESCRIBECACHERESPONSE_H

#include "storagegatewayresponse.h"
#include "describecacherequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeCacheResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeCacheResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DescribeCacheResponse(const DescribeCacheRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCacheRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCacheResponse)
    Q_DISABLE_COPY(DescribeCacheResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
