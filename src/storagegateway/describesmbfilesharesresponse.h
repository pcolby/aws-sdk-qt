// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESMBFILESHARESRESPONSE_H
#define QTAWS_DESCRIBESMBFILESHARESRESPONSE_H

#include "storagegatewayresponse.h"
#include "describesmbfilesharesrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeSMBFileSharesResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeSMBFileSharesResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DescribeSMBFileSharesResponse(const DescribeSMBFileSharesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSMBFileSharesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSMBFileSharesResponse)
    Q_DISABLE_COPY(DescribeSMBFileSharesResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
