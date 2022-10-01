// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCORENETWORKREQUEST_H
#define QTAWS_GETCORENETWORKREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetCoreNetworkRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT GetCoreNetworkRequest : public NetworkManagerRequest {

public:
    GetCoreNetworkRequest(const GetCoreNetworkRequest &other);
    GetCoreNetworkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCoreNetworkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
