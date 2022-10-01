// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKREQUEST_H
#define QTAWS_DELETENETWORKREQUEST_H

#include "privatenetworksrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class DeleteNetworkRequestPrivate;

class QTAWSPRIVATENETWORKS_EXPORT DeleteNetworkRequest : public PrivateNetworksRequest {

public:
    DeleteNetworkRequest(const DeleteNetworkRequest &other);
    DeleteNetworkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
