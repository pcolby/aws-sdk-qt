// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORECORENETWORKPOLICYVERSIONREQUEST_H
#define QTAWS_RESTORECORENETWORKPOLICYVERSIONREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class RestoreCoreNetworkPolicyVersionRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT RestoreCoreNetworkPolicyVersionRequest : public NetworkManagerRequest {

public:
    RestoreCoreNetworkPolicyVersionRequest(const RestoreCoreNetworkPolicyVersionRequest &other);
    RestoreCoreNetworkPolicyVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreCoreNetworkPolicyVersionRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
