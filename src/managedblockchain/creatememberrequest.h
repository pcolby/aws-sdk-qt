// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEMBERREQUEST_H
#define QTAWS_CREATEMEMBERREQUEST_H

#include "managedblockchainrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class CreateMemberRequestPrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT CreateMemberRequest : public ManagedBlockchainRequest {

public:
    CreateMemberRequest(const CreateMemberRequest &other);
    CreateMemberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMemberRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
