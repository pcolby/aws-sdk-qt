// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCROSSACCOUNTACCESSROLEREQUEST_P_H
#define QTAWS_REGISTERCROSSACCOUNTACCESSROLEREQUEST_P_H

#include "inspectorrequest_p.h"
#include "registercrossaccountaccessrolerequest.h"

namespace QtAws {
namespace Inspector {

class RegisterCrossAccountAccessRoleRequest;

class RegisterCrossAccountAccessRoleRequestPrivate : public InspectorRequestPrivate {

public:
    RegisterCrossAccountAccessRoleRequestPrivate(const InspectorRequest::Action action,
                                   RegisterCrossAccountAccessRoleRequest * const q);
    RegisterCrossAccountAccessRoleRequestPrivate(const RegisterCrossAccountAccessRoleRequestPrivate &other,
                                   RegisterCrossAccountAccessRoleRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterCrossAccountAccessRoleRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
