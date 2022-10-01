// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTINSTANCECONFIGREQUEST_P_H
#define QTAWS_GETCONNECTINSTANCECONFIGREQUEST_P_H

#include "connectcampaignsrequest_p.h"
#include "getconnectinstanceconfigrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class GetConnectInstanceConfigRequest;

class GetConnectInstanceConfigRequestPrivate : public ConnectCampaignsRequestPrivate {

public:
    GetConnectInstanceConfigRequestPrivate(const ConnectCampaignsRequest::Action action,
                                   GetConnectInstanceConfigRequest * const q);
    GetConnectInstanceConfigRequestPrivate(const GetConnectInstanceConfigRequestPrivate &other,
                                   GetConnectInstanceConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConnectInstanceConfigRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
