// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECORENETWORKREQUEST_H
#define QTAWS_UPDATECORENETWORKREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class UpdateCoreNetworkRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT UpdateCoreNetworkRequest : public NetworkManagerRequest {

public:
    UpdateCoreNetworkRequest(const UpdateCoreNetworkRequest &other);
    UpdateCoreNetworkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCoreNetworkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
