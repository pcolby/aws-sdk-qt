// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NIMBLEREQUEST_P_H
#define QTAWS_NIMBLEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class NimbleRequest;

class NimbleRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    NimbleRequest::Action action; ///< Nimble action to be performed.
    QString apiVersion;        ///< Nimble API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Nimble request (query string) parameters. @todo?

    NimbleRequestPrivate(const NimbleRequest::Action action, NimbleRequest * const q);
    NimbleRequestPrivate(const NimbleRequestPrivate &other, NimbleRequest * const q);

    static QString toString(const NimbleRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(NimbleRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
