// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BRAKETREQUEST_P_H
#define QTAWS_BRAKETREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "braketrequest.h"

namespace QtAws {
namespace Braket {

class BraketRequest;

class BraketRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    BraketRequest::Action action; ///< Braket action to be performed.
    QString apiVersion;        ///< Braket API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Braket request (query string) parameters. @todo?

    BraketRequestPrivate(const BraketRequest::Action action, BraketRequest * const q);
    BraketRequestPrivate(const BraketRequestPrivate &other, BraketRequest * const q);

    static QString toString(const BraketRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(BraketRequest)

};

} // namespace Braket
} // namespace QtAws

#endif
