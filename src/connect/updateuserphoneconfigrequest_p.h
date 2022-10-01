// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERPHONECONFIGREQUEST_P_H
#define QTAWS_UPDATEUSERPHONECONFIGREQUEST_P_H

#include "connectrequest_p.h"
#include "updateuserphoneconfigrequest.h"

namespace QtAws {
namespace Connect {

class UpdateUserPhoneConfigRequest;

class UpdateUserPhoneConfigRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateUserPhoneConfigRequestPrivate(const ConnectRequest::Action action,
                                   UpdateUserPhoneConfigRequest * const q);
    UpdateUserPhoneConfigRequestPrivate(const UpdateUserPhoneConfigRequestPrivate &other,
                                   UpdateUserPhoneConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateUserPhoneConfigRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
