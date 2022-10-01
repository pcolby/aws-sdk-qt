// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROTONREQUEST_P_H
#define QTAWS_PROTONREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class ProtonRequest;

class ProtonRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ProtonRequest::Action action; ///< Proton action to be performed.
    QString apiVersion;        ///< Proton API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Proton request (query string) parameters. @todo?

    ProtonRequestPrivate(const ProtonRequest::Action action, ProtonRequest * const q);
    ProtonRequestPrivate(const ProtonRequestPrivate &other, ProtonRequest * const q);

    static QString toString(const ProtonRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ProtonRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
