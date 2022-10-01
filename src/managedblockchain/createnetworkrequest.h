// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKREQUEST_H
#define QTAWS_CREATENETWORKREQUEST_H

#include "managedblockchainrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class CreateNetworkRequestPrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT CreateNetworkRequest : public ManagedBlockchainRequest {

public:
    CreateNetworkRequest(const CreateNetworkRequest &other);
    CreateNetworkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNetworkRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
