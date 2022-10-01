// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCORENETWORKPOLICYVERSIONSREQUEST_H
#define QTAWS_LISTCORENETWORKPOLICYVERSIONSREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class ListCoreNetworkPolicyVersionsRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT ListCoreNetworkPolicyVersionsRequest : public NetworkManagerRequest {

public:
    ListCoreNetworkPolicyVersionsRequest(const ListCoreNetworkPolicyVersionsRequest &other);
    ListCoreNetworkPolicyVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCoreNetworkPolicyVersionsRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
