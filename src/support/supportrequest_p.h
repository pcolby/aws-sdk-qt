// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUPPORTREQUEST_P_H
#define QTAWS_SUPPORTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "supportrequest.h"

namespace QtAws {
namespace Support {

class SupportRequest;

class SupportRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SupportRequest::Action action; ///< Support action to be performed.
    QString apiVersion;        ///< Support API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Support request (query string) parameters. @todo?

    SupportRequestPrivate(const SupportRequest::Action action, SupportRequest * const q);
    SupportRequestPrivate(const SupportRequestPrivate &other, SupportRequest * const q);

    static QString toString(const SupportRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SupportRequest)

};

} // namespace Support
} // namespace QtAws

#endif
