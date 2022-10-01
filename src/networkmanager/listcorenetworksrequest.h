// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCORENETWORKSREQUEST_H
#define QTAWS_LISTCORENETWORKSREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class ListCoreNetworksRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT ListCoreNetworksRequest : public NetworkManagerRequest {

public:
    ListCoreNetworksRequest(const ListCoreNetworksRequest &other);
    ListCoreNetworksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCoreNetworksRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
