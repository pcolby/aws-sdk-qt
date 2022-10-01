// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCORENETWORKPOLICYREQUEST_H
#define QTAWS_GETCORENETWORKPOLICYREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetCoreNetworkPolicyRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT GetCoreNetworkPolicyRequest : public NetworkManagerRequest {

public:
    GetCoreNetworkPolicyRequest(const GetCoreNetworkPolicyRequest &other);
    GetCoreNetworkPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCoreNetworkPolicyRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
