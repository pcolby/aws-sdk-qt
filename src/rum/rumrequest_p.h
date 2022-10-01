// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUMREQUEST_P_H
#define QTAWS_RUMREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "rumrequest.h"

namespace QtAws {
namespace Rum {

class RumRequest;

class RumRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    RumRequest::Action action; ///< Rum action to be performed.
    QString apiVersion;        ///< Rum API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Rum request (query string) parameters. @todo?

    RumRequestPrivate(const RumRequest::Action action, RumRequest * const q);
    RumRequestPrivate(const RumRequestPrivate &other, RumRequest * const q);

    static QString toString(const RumRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(RumRequest)

};

} // namespace Rum
} // namespace QtAws

#endif
