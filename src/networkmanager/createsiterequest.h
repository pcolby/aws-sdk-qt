// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESITEREQUEST_H
#define QTAWS_CREATESITEREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateSiteRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT CreateSiteRequest : public NetworkManagerRequest {

public:
    CreateSiteRequest(const CreateSiteRequest &other);
    CreateSiteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSiteRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
