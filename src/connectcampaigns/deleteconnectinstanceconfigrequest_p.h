// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTINSTANCECONFIGREQUEST_P_H
#define QTAWS_DELETECONNECTINSTANCECONFIGREQUEST_P_H

#include "connectcampaignsrequest_p.h"
#include "deleteconnectinstanceconfigrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class DeleteConnectInstanceConfigRequest;

class DeleteConnectInstanceConfigRequestPrivate : public ConnectCampaignsRequestPrivate {

public:
    DeleteConnectInstanceConfigRequestPrivate(const ConnectCampaignsRequest::Action action,
                                   DeleteConnectInstanceConfigRequest * const q);
    DeleteConnectInstanceConfigRequestPrivate(const DeleteConnectInstanceConfigRequestPrivate &other,
                                   DeleteConnectInstanceConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConnectInstanceConfigRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
