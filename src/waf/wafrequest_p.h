// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WAFREQUEST_P_H
#define QTAWS_WAFREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class WafRequest;

class WafRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    WafRequest::Action action; ///< Waf action to be performed.
    QString apiVersion;        ///< Waf API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Waf request (query string) parameters. @todo?

    WafRequestPrivate(const WafRequest::Action action, WafRequest * const q);
    WafRequestPrivate(const WafRequestPrivate &other, WafRequest * const q);

    static QString toString(const WafRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(WafRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
