// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENFSFILESHARESRESPONSE_H
#define QTAWS_DESCRIBENFSFILESHARESRESPONSE_H

#include "storagegatewayresponse.h"
#include "describenfsfilesharesrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeNFSFileSharesResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeNFSFileSharesResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DescribeNFSFileSharesResponse(const DescribeNFSFileSharesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNFSFileSharesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNFSFileSharesResponse)
    Q_DISABLE_COPY(DescribeNFSFileSharesResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
