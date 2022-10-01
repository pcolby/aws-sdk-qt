// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PIREQUEST_P_H
#define QTAWS_PIREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "pirequest.h"

namespace QtAws {
namespace Pi {

class PiRequest;

class PiRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    PiRequest::Action action; ///< Pi action to be performed.
    QString apiVersion;        ///< Pi API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Pi request (query string) parameters. @todo?

    PiRequestPrivate(const PiRequest::Action action, PiRequest * const q);
    PiRequestPrivate(const PiRequestPrivate &other, PiRequest * const q);

    static QString toString(const PiRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(PiRequest)

};

} // namespace Pi
} // namespace QtAws

#endif
