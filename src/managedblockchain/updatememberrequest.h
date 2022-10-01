// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMEMBERREQUEST_H
#define QTAWS_UPDATEMEMBERREQUEST_H

#include "managedblockchainrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class UpdateMemberRequestPrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT UpdateMemberRequest : public ManagedBlockchainRequest {

public:
    UpdateMemberRequest(const UpdateMemberRequest &other);
    UpdateMemberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMemberRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
