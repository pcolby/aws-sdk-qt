// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SNSREQUEST_P_H
#define QTAWS_SNSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class SnsRequest;

class SnsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SnsRequest::Action action; ///< Sns action to be performed.
    QString apiVersion;        ///< Sns API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Sns request (query string) parameters. @todo?

    SnsRequestPrivate(const SnsRequest::Action action, SnsRequest * const q);
    SnsRequestPrivate(const SnsRequestPrivate &other, SnsRequest * const q);

    static QString toString(const SnsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SnsRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
