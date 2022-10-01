// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECORENETWORKREQUEST_H
#define QTAWS_CREATECORENETWORKREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateCoreNetworkRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT CreateCoreNetworkRequest : public NetworkManagerRequest {

public:
    CreateCoreNetworkRequest(const CreateCoreNetworkRequest &other);
    CreateCoreNetworkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCoreNetworkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
