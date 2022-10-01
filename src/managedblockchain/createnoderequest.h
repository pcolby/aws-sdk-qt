// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENODEREQUEST_H
#define QTAWS_CREATENODEREQUEST_H

#include "managedblockchainrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class CreateNodeRequestPrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT CreateNodeRequest : public ManagedBlockchainRequest {

public:
    CreateNodeRequest(const CreateNodeRequest &other);
    CreateNodeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNodeRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
