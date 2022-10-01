// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFILESYSTEMASSOCIATIONSRESPONSE_H
#define QTAWS_DESCRIBEFILESYSTEMASSOCIATIONSRESPONSE_H

#include "storagegatewayresponse.h"
#include "describefilesystemassociationsrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeFileSystemAssociationsResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeFileSystemAssociationsResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DescribeFileSystemAssociationsResponse(const DescribeFileSystemAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFileSystemAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFileSystemAssociationsResponse)
    Q_DISABLE_COPY(DescribeFileSystemAssociationsResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
