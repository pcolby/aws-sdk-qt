// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKSREQUEST_H
#define QTAWS_LISTNETWORKSREQUEST_H

#include "managedblockchainrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class ListNetworksRequestPrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT ListNetworksRequest : public ManagedBlockchainRequest {

public:
    ListNetworksRequest(const ListNetworksRequest &other);
    ListNetworksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNetworksRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
