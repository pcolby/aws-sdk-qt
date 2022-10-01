// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCEREQUEST_P_H
#define QTAWS_CREATEINSTANCEREQUEST_P_H

#include "connectrequest_p.h"
#include "createinstancerequest.h"

namespace QtAws {
namespace Connect {

class CreateInstanceRequest;

class CreateInstanceRequestPrivate : public ConnectRequestPrivate {

public:
    CreateInstanceRequestPrivate(const ConnectRequest::Action action,
                                   CreateInstanceRequest * const q);
    CreateInstanceRequestPrivate(const CreateInstanceRequestPrivate &other,
                                   CreateInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateInstanceRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
