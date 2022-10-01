// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WAFV2REQUEST_P_H
#define QTAWS_WAFV2REQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class Wafv2Request;

class Wafv2RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    Wafv2Request::Action action; ///< Wafv2 action to be performed.
    QString apiVersion;        ///< Wafv2 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Wafv2 request (query string) parameters. @todo?

    Wafv2RequestPrivate(const Wafv2Request::Action action, Wafv2Request * const q);
    Wafv2RequestPrivate(const Wafv2RequestPrivate &other, Wafv2Request * const q);

    static QString toString(const Wafv2Request::Action &action);

private:
    Q_DECLARE_PUBLIC(Wafv2Request)

};

} // namespace Wafv2
} // namespace QtAws

#endif
