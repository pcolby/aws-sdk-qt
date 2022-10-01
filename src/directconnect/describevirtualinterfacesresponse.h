// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALINTERFACESRESPONSE_H
#define QTAWS_DESCRIBEVIRTUALINTERFACESRESPONSE_H

#include "directconnectresponse.h"
#include "describevirtualinterfacesrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeVirtualInterfacesResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeVirtualInterfacesResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DescribeVirtualInterfacesResponse(const DescribeVirtualInterfacesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVirtualInterfacesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVirtualInterfacesResponse)
    Q_DISABLE_COPY(DescribeVirtualInterfacesResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
