// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESECURITYPROFILEREQUEST_P_H
#define QTAWS_DELETESECURITYPROFILEREQUEST_P_H

#include "connectrequest_p.h"
#include "deletesecurityprofilerequest.h"

namespace QtAws {
namespace Connect {

class DeleteSecurityProfileRequest;

class DeleteSecurityProfileRequestPrivate : public ConnectRequestPrivate {

public:
    DeleteSecurityProfileRequestPrivate(const ConnectRequest::Action action,
                                   DeleteSecurityProfileRequest * const q);
    DeleteSecurityProfileRequestPrivate(const DeleteSecurityProfileRequestPrivate &other,
                                   DeleteSecurityProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSecurityProfileRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
