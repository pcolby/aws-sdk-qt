// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLINKSREQUEST_H
#define QTAWS_GETLINKSREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetLinksRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT GetLinksRequest : public NetworkManagerRequest {

public:
    GetLinksRequest(const GetLinksRequest &other);
    GetLinksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLinksRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
