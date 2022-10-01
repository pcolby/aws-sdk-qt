// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WISDOMREQUEST_P_H
#define QTAWS_WISDOMREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class WisdomRequest;

class WisdomRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    WisdomRequest::Action action; ///< Wisdom action to be performed.
    QString apiVersion;        ///< Wisdom API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Wisdom request (query string) parameters. @todo?

    WisdomRequestPrivate(const WisdomRequest::Action action, WisdomRequest * const q);
    WisdomRequestPrivate(const WisdomRequestPrivate &other, WisdomRequest * const q);

    static QString toString(const WisdomRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(WisdomRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
