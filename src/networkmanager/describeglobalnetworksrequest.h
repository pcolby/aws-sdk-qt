// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALNETWORKSREQUEST_H
#define QTAWS_DESCRIBEGLOBALNETWORKSREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class DescribeGlobalNetworksRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT DescribeGlobalNetworksRequest : public NetworkManagerRequest {

public:
    DescribeGlobalNetworksRequest(const DescribeGlobalNetworksRequest &other);
    DescribeGlobalNetworksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGlobalNetworksRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
