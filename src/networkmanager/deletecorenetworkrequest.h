// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECORENETWORKREQUEST_H
#define QTAWS_DELETECORENETWORKREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeleteCoreNetworkRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT DeleteCoreNetworkRequest : public NetworkManagerRequest {

public:
    DeleteCoreNetworkRequest(const DeleteCoreNetworkRequest &other);
    DeleteCoreNetworkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCoreNetworkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
