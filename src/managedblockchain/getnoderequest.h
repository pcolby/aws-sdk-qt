// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNODEREQUEST_H
#define QTAWS_GETNODEREQUEST_H

#include "managedblockchainrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class GetNodeRequestPrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT GetNodeRequest : public ManagedBlockchainRequest {

public:
    GetNodeRequest(const GetNodeRequest &other);
    GetNodeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNodeRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
