// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSOREQUEST_P_H
#define QTAWS_SSOREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ssorequest.h"

namespace QtAws {
namespace Sso {

class SsoRequest;

class SsoRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SsoRequest::Action action; ///< Sso action to be performed.
    QString apiVersion;        ///< Sso API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Sso request (query string) parameters. @todo?

    SsoRequestPrivate(const SsoRequest::Action action, SsoRequest * const q);
    SsoRequestPrivate(const SsoRequestPrivate &other, SsoRequest * const q);

    static QString toString(const SsoRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SsoRequest)

};

} // namespace Sso
} // namespace QtAws

#endif
