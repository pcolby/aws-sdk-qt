// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGLOBALNETWORKREQUEST_H
#define QTAWS_CREATEGLOBALNETWORKREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateGlobalNetworkRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT CreateGlobalNetworkRequest : public NetworkManagerRequest {

public:
    CreateGlobalNetworkRequest(const CreateGlobalNetworkRequest &other);
    CreateGlobalNetworkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGlobalNetworkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
