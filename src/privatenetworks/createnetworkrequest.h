// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKREQUEST_H
#define QTAWS_CREATENETWORKREQUEST_H

#include "privatenetworksrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class CreateNetworkRequestPrivate;

class QTAWSPRIVATENETWORKS_EXPORT CreateNetworkRequest : public PrivateNetworksRequest {

public:
    CreateNetworkRequest(const CreateNetworkRequest &other);
    CreateNetworkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNetworkRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
