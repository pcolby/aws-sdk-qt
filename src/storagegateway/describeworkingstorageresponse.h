// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKINGSTORAGERESPONSE_H
#define QTAWS_DESCRIBEWORKINGSTORAGERESPONSE_H

#include "storagegatewayresponse.h"
#include "describeworkingstoragerequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeWorkingStorageResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeWorkingStorageResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DescribeWorkingStorageResponse(const DescribeWorkingStorageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWorkingStorageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkingStorageResponse)
    Q_DISABLE_COPY(DescribeWorkingStorageResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
