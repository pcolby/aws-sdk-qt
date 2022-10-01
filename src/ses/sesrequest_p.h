// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SESREQUEST_P_H
#define QTAWS_SESREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class SesRequest;

class SesRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SesRequest::Action action; ///< Ses action to be performed.
    QString apiVersion;        ///< Ses API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Ses request (query string) parameters. @todo?

    SesRequestPrivate(const SesRequest::Action action, SesRequest * const q);
    SesRequestPrivate(const SesRequestPrivate &other, SesRequest * const q);

    static QString toString(const SesRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SesRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
