// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_M2REQUEST_P_H
#define QTAWS_M2REQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "m2request.h"

namespace QtAws {
namespace M2 {

class M2Request;

class M2RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    M2Request::Action action; ///< M2 action to be performed.
    QString apiVersion;        ///< M2 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< M2 request (query string) parameters. @todo?

    M2RequestPrivate(const M2Request::Action action, M2Request * const q);
    M2RequestPrivate(const M2RequestPrivate &other, M2Request * const q);

    static QString toString(const M2Request::Action &action);

private:
    Q_DECLARE_PUBLIC(M2Request)

};

} // namespace M2
} // namespace QtAws

#endif
