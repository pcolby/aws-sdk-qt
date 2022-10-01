// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOCALCONSOLEPASSWORDREQUEST_H
#define QTAWS_SETLOCALCONSOLEPASSWORDREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class SetLocalConsolePasswordRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT SetLocalConsolePasswordRequest : public StorageGatewayRequest {

public:
    SetLocalConsolePasswordRequest(const SetLocalConsolePasswordRequest &other);
    SetLocalConsolePasswordRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetLocalConsolePasswordRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
