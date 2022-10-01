// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPEERINGSREQUEST_H
#define QTAWS_LISTPEERINGSREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class ListPeeringsRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT ListPeeringsRequest : public NetworkManagerRequest {

public:
    ListPeeringsRequest(const ListPeeringsRequest &other);
    ListPeeringsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPeeringsRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
