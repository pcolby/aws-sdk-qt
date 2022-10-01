// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKREQUEST_H
#define QTAWS_GETNETWORKREQUEST_H

#include "privatenetworksrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class GetNetworkRequestPrivate;

class QTAWSPRIVATENETWORKS_EXPORT GetNetworkRequest : public PrivateNetworksRequest {

public:
    GetNetworkRequest(const GetNetworkRequest &other);
    GetNetworkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
