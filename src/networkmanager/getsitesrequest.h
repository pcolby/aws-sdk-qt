// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSITESREQUEST_H
#define QTAWS_GETSITESREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetSitesRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT GetSitesRequest : public NetworkManagerRequest {

public:
    GetSitesRequest(const GetSitesRequest &other);
    GetSitesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSitesRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
