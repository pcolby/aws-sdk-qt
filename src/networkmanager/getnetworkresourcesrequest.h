// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKRESOURCESREQUEST_H
#define QTAWS_GETNETWORKRESOURCESREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetNetworkResourcesRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT GetNetworkResourcesRequest : public NetworkManagerRequest {

public:
    GetNetworkResourcesRequest(const GetNetworkResourcesRequest &other);
    GetNetworkResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkResourcesRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
