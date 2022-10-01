// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTINSTANCECONFIGREQUEST_H
#define QTAWS_DELETECONNECTINSTANCECONFIGREQUEST_H

#include "connectcampaignsrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class DeleteConnectInstanceConfigRequestPrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT DeleteConnectInstanceConfigRequest : public ConnectCampaignsRequest {

public:
    DeleteConnectInstanceConfigRequest(const DeleteConnectInstanceConfigRequest &other);
    DeleteConnectInstanceConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConnectInstanceConfigRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
