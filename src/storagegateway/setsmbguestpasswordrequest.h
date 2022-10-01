// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSMBGUESTPASSWORDREQUEST_H
#define QTAWS_SETSMBGUESTPASSWORDREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class SetSMBGuestPasswordRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT SetSMBGuestPasswordRequest : public StorageGatewayRequest {

public:
    SetSMBGuestPasswordRequest(const SetSMBGuestPasswordRequest &other);
    SetSMBGuestPasswordRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetSMBGuestPasswordRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
