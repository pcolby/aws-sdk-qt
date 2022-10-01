// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFILESYSTEMASSOCIATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEFILESYSTEMASSOCIATIONSRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DescribeFileSystemAssociationsResponse;

class DescribeFileSystemAssociationsResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DescribeFileSystemAssociationsResponsePrivate(DescribeFileSystemAssociationsResponse * const q);

    void parseDescribeFileSystemAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFileSystemAssociationsResponse)
    Q_DISABLE_COPY(DescribeFileSystemAssociationsResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
