// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERRDSDBINSTANCEREQUEST_P_H
#define QTAWS_REGISTERRDSDBINSTANCEREQUEST_P_H

#include "opsworksrequest_p.h"
#include "registerrdsdbinstancerequest.h"

namespace QtAws {
namespace OpsWorks {

class RegisterRdsDbInstanceRequest;

class RegisterRdsDbInstanceRequestPrivate : public OpsWorksRequestPrivate {

public:
    RegisterRdsDbInstanceRequestPrivate(const OpsWorksRequest::Action action,
                                   RegisterRdsDbInstanceRequest * const q);
    RegisterRdsDbInstanceRequestPrivate(const RegisterRdsDbInstanceRequestPrivate &other,
                                   RegisterRdsDbInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterRdsDbInstanceRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
