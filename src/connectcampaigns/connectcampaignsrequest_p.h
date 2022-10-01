// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTCAMPAIGNSREQUEST_P_H
#define QTAWS_CONNECTCAMPAIGNSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "connectcampaignsrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class ConnectCampaignsRequest;

class ConnectCampaignsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ConnectCampaignsRequest::Action action; ///< ConnectCampaigns action to be performed.
    QString apiVersion;        ///< ConnectCampaigns API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ConnectCampaigns request (query string) parameters. @todo?

    ConnectCampaignsRequestPrivate(const ConnectCampaignsRequest::Action action, ConnectCampaignsRequest * const q);
    ConnectCampaignsRequestPrivate(const ConnectCampaignsRequestPrivate &other, ConnectCampaignsRequest * const q);

    static QString toString(const ConnectCampaignsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ConnectCampaignsRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
