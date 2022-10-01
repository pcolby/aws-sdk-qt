// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SHIELDREQUEST_P_H
#define QTAWS_SHIELDREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class ShieldRequest;

class ShieldRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ShieldRequest::Action action; ///< Shield action to be performed.
    QString apiVersion;        ///< Shield API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Shield request (query string) parameters. @todo?

    ShieldRequestPrivate(const ShieldRequest::Action action, ShieldRequest * const q);
    ShieldRequestPrivate(const ShieldRequestPrivate &other, ShieldRequest * const q);

    static QString toString(const ShieldRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ShieldRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
