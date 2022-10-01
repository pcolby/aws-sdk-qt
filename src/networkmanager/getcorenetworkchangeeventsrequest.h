// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCORENETWORKCHANGEEVENTSREQUEST_H
#define QTAWS_GETCORENETWORKCHANGEEVENTSREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetCoreNetworkChangeEventsRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT GetCoreNetworkChangeEventsRequest : public NetworkManagerRequest {

public:
    GetCoreNetworkChangeEventsRequest(const GetCoreNetworkChangeEventsRequest &other);
    GetCoreNetworkChangeEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCoreNetworkChangeEventsRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
