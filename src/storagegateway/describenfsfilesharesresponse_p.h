// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENFSFILESHARESRESPONSE_P_H
#define QTAWS_DESCRIBENFSFILESHARESRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DescribeNFSFileSharesResponse;

class DescribeNFSFileSharesResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DescribeNFSFileSharesResponsePrivate(DescribeNFSFileSharesResponse * const q);

    void parseDescribeNFSFileSharesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNFSFileSharesResponse)
    Q_DISABLE_COPY(DescribeNFSFileSharesResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
