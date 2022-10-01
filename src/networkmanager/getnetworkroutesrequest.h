// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKROUTESREQUEST_H
#define QTAWS_GETNETWORKROUTESREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetNetworkRoutesRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT GetNetworkRoutesRequest : public NetworkManagerRequest {

public:
    GetNetworkRoutesRequest(const GetNetworkRoutesRequest &other);
    GetNetworkRoutesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkRoutesRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
