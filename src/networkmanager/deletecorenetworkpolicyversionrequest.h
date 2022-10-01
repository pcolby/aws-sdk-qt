// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECORENETWORKPOLICYVERSIONREQUEST_H
#define QTAWS_DELETECORENETWORKPOLICYVERSIONREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeleteCoreNetworkPolicyVersionRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT DeleteCoreNetworkPolicyVersionRequest : public NetworkManagerRequest {

public:
    DeleteCoreNetworkPolicyVersionRequest(const DeleteCoreNetworkPolicyVersionRequest &other);
    DeleteCoreNetworkPolicyVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCoreNetworkPolicyVersionRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
