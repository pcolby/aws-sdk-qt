// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROLESANYWHEREREQUEST_P_H
#define QTAWS_ROLESANYWHEREREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "rolesanywhererequest.h"

namespace QtAws {
namespace RolesAnywhere {

class RolesAnywhereRequest;

class RolesAnywhereRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    RolesAnywhereRequest::Action action; ///< RolesAnywhere action to be performed.
    QString apiVersion;        ///< RolesAnywhere API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< RolesAnywhere request (query string) parameters. @todo?

    RolesAnywhereRequestPrivate(const RolesAnywhereRequest::Action action, RolesAnywhereRequest * const q);
    RolesAnywhereRequestPrivate(const RolesAnywhereRequestPrivate &other, RolesAnywhereRequest * const q);

    static QString toString(const RolesAnywhereRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(RolesAnywhereRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
