// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENODEREQUEST_H
#define QTAWS_UPDATENODEREQUEST_H

#include "managedblockchainrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class UpdateNodeRequestPrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT UpdateNodeRequest : public ManagedBlockchainRequest {

public:
    UpdateNodeRequest(const UpdateNodeRequest &other);
    UpdateNodeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNodeRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
