// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSOADMINREQUEST_P_H
#define QTAWS_SSOADMINREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class SsoAdminRequest;

class SsoAdminRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SsoAdminRequest::Action action; ///< SsoAdmin action to be performed.
    QString apiVersion;        ///< SsoAdmin API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SsoAdmin request (query string) parameters. @todo?

    SsoAdminRequestPrivate(const SsoAdminRequest::Action action, SsoAdminRequest * const q);
    SsoAdminRequestPrivate(const SsoAdminRequestPrivate &other, SsoAdminRequest * const q);

    static QString toString(const SsoAdminRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SsoAdminRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
