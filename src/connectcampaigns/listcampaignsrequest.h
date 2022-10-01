// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCAMPAIGNSREQUEST_H
#define QTAWS_LISTCAMPAIGNSREQUEST_H

#include "connectcampaignsrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class ListCampaignsRequestPrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT ListCampaignsRequest : public ConnectCampaignsRequest {

public:
    ListCampaignsRequest(const ListCampaignsRequest &other);
    ListCampaignsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCampaignsRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
