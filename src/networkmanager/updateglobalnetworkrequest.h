// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGLOBALNETWORKREQUEST_H
#define QTAWS_UPDATEGLOBALNETWORKREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class UpdateGlobalNetworkRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT UpdateGlobalNetworkRequest : public NetworkManagerRequest {

public:
    UpdateGlobalNetworkRequest(const UpdateGlobalNetworkRequest &other);
    UpdateGlobalNetworkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGlobalNetworkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
