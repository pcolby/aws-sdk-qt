// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESITEREQUEST_H
#define QTAWS_UPDATESITEREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class UpdateSiteRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT UpdateSiteRequest : public NetworkManagerRequest {

public:
    UpdateSiteRequest(const UpdateSiteRequest &other);
    UpdateSiteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSiteRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
