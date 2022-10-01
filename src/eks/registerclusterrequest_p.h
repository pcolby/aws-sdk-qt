// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCLUSTERREQUEST_P_H
#define QTAWS_REGISTERCLUSTERREQUEST_P_H

#include "eksrequest_p.h"
#include "registerclusterrequest.h"

namespace QtAws {
namespace Eks {

class RegisterClusterRequest;

class RegisterClusterRequestPrivate : public EksRequestPrivate {

public:
    RegisterClusterRequestPrivate(const EksRequest::Action action,
                                   RegisterClusterRequest * const q);
    RegisterClusterRequestPrivate(const RegisterClusterRequestPrivate &other,
                                   RegisterClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterClusterRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
