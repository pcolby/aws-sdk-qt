// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALINTERFACESREQUEST_H
#define QTAWS_DESCRIBEVIRTUALINTERFACESREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeVirtualInterfacesRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeVirtualInterfacesRequest : public DirectConnectRequest {

public:
    DescribeVirtualInterfacesRequest(const DescribeVirtualInterfacesRequest &other);
    DescribeVirtualInterfacesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVirtualInterfacesRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
