// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTCAMPAIGNSCLIENT_P_H
#define QTAWS_CONNECTCAMPAIGNSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ConnectCampaigns {

class ConnectCampaignsClient;

class ConnectCampaignsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ConnectCampaignsClientPrivate(ConnectCampaignsClient * const q);

private:
    Q_DECLARE_PUBLIC(ConnectCampaignsClient)
    Q_DISABLE_COPY(ConnectCampaignsClientPrivate)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
