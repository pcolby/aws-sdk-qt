// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGLOBALNETWORKREQUEST_H
#define QTAWS_DELETEGLOBALNETWORKREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeleteGlobalNetworkRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT DeleteGlobalNetworkRequest : public NetworkManagerRequest {

public:
    DeleteGlobalNetworkRequest(const DeleteGlobalNetworkRequest &other);
    DeleteGlobalNetworkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGlobalNetworkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
