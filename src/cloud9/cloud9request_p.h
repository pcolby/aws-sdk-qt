// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUD9REQUEST_P_H
#define QTAWS_CLOUD9REQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "cloud9request.h"

namespace QtAws {
namespace Cloud9 {

class Cloud9Request;

class Cloud9RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    Cloud9Request::Action action; ///< Cloud9 action to be performed.
    QString apiVersion;        ///< Cloud9 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Cloud9 request (query string) parameters. @todo?

    Cloud9RequestPrivate(const Cloud9Request::Action action, Cloud9Request * const q);
    Cloud9RequestPrivate(const Cloud9RequestPrivate &other, Cloud9Request * const q);

    static QString toString(const Cloud9Request::Action &action);

private:
    Q_DECLARE_PUBLIC(Cloud9Request)

};

} // namespace Cloud9
} // namespace QtAws

#endif
