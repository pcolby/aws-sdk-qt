// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKRESOURCECOUNTSREQUEST_H
#define QTAWS_GETNETWORKRESOURCECOUNTSREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetNetworkResourceCountsRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT GetNetworkResourceCountsRequest : public NetworkManagerRequest {

public:
    GetNetworkResourceCountsRequest(const GetNetworkResourceCountsRequest &other);
    GetNetworkResourceCountsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkResourceCountsRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
