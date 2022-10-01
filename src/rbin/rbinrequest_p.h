// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RBINREQUEST_P_H
#define QTAWS_RBINREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "rbinrequest.h"

namespace QtAws {
namespace Rbin {

class RbinRequest;

class RbinRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    RbinRequest::Action action; ///< Rbin action to be performed.
    QString apiVersion;        ///< Rbin API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Rbin request (query string) parameters. @todo?

    RbinRequestPrivate(const RbinRequest::Action action, RbinRequest * const q);
    RbinRequestPrivate(const RbinRequestPrivate &other, RbinRequest * const q);

    static QString toString(const RbinRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(RbinRequest)

};

} // namespace Rbin
} // namespace QtAws

#endif
