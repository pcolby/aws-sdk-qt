// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WAFREGIONALREQUEST_P_H
#define QTAWS_WAFREGIONALREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class WafRegionalRequest;

class WafRegionalRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    WafRegionalRequest::Action action; ///< WafRegional action to be performed.
    QString apiVersion;        ///< WafRegional API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< WafRegional request (query string) parameters. @todo?

    WafRegionalRequestPrivate(const WafRegionalRequest::Action action, WafRegionalRequest * const q);
    WafRegionalRequestPrivate(const WafRegionalRequestPrivate &other, WafRegionalRequest * const q);

    static QString toString(const WafRegionalRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(WafRegionalRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
