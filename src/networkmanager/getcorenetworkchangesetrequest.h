// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCORENETWORKCHANGESETREQUEST_H
#define QTAWS_GETCORENETWORKCHANGESETREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetCoreNetworkChangeSetRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT GetCoreNetworkChangeSetRequest : public NetworkManagerRequest {

public:
    GetCoreNetworkChangeSetRequest(const GetCoreNetworkChangeSetRequest &other);
    GetCoreNetworkChangeSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCoreNetworkChangeSetRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
