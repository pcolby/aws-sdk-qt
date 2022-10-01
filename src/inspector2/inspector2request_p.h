// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INSPECTOR2REQUEST_P_H
#define QTAWS_INSPECTOR2REQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "inspector2request.h"

namespace QtAws {
namespace Inspector2 {

class Inspector2Request;

class Inspector2RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    Inspector2Request::Action action; ///< Inspector2 action to be performed.
    QString apiVersion;        ///< Inspector2 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Inspector2 request (query string) parameters. @todo?

    Inspector2RequestPrivate(const Inspector2Request::Action action, Inspector2Request * const q);
    Inspector2RequestPrivate(const Inspector2RequestPrivate &other, Inspector2Request * const q);

    static QString toString(const Inspector2Request::Action &action);

private:
    Q_DECLARE_PUBLIC(Inspector2Request)

};

} // namespace Inspector2
} // namespace QtAws

#endif
