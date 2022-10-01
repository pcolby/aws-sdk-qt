// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGROUPREQUEST_H
#define QTAWS_UPDATEGROUPREQUEST_H

#include "identitystorerequest.h"

namespace QtAws {
namespace IdentityStore {

class UpdateGroupRequestPrivate;

class QTAWSIDENTITYSTORE_EXPORT UpdateGroupRequest : public IdentityStoreRequest {

public:
    UpdateGroupRequest(const UpdateGroupRequest &other);
    UpdateGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGroupRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
