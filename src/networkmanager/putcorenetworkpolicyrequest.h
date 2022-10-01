// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCORENETWORKPOLICYREQUEST_H
#define QTAWS_PUTCORENETWORKPOLICYREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class PutCoreNetworkPolicyRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT PutCoreNetworkPolicyRequest : public NetworkManagerRequest {

public:
    PutCoreNetworkPolicyRequest(const PutCoreNetworkPolicyRequest &other);
    PutCoreNetworkPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutCoreNetworkPolicyRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
