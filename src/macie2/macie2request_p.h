// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MACIE2REQUEST_P_H
#define QTAWS_MACIE2REQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class Macie2Request;

class Macie2RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    Macie2Request::Action action; ///< Macie2 action to be performed.
    QString apiVersion;        ///< Macie2 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Macie2 request (query string) parameters. @todo?

    Macie2RequestPrivate(const Macie2Request::Action action, Macie2Request * const q);
    Macie2RequestPrivate(const Macie2RequestPrivate &other, Macie2Request * const q);

    static QString toString(const Macie2Request::Action &action);

private:
    Q_DECLARE_PUBLIC(Macie2Request)

};

} // namespace Macie2
} // namespace QtAws

#endif
