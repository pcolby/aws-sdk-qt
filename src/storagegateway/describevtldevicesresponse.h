// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVTLDEVICESRESPONSE_H
#define QTAWS_DESCRIBEVTLDEVICESRESPONSE_H

#include "storagegatewayresponse.h"
#include "describevtldevicesrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeVTLDevicesResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeVTLDevicesResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DescribeVTLDevicesResponse(const DescribeVTLDevicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVTLDevicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVTLDevicesResponse)
    Q_DISABLE_COPY(DescribeVTLDevicesResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
