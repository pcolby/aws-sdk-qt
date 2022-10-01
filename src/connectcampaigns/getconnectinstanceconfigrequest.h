// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTINSTANCECONFIGREQUEST_H
#define QTAWS_GETCONNECTINSTANCECONFIGREQUEST_H

#include "connectcampaignsrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class GetConnectInstanceConfigRequestPrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT GetConnectInstanceConfigRequest : public ConnectCampaignsRequest {

public:
    GetConnectInstanceConfigRequest(const GetConnectInstanceConfigRequest &other);
    GetConnectInstanceConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectInstanceConfigRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
