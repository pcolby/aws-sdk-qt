// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SFNREQUEST_P_H
#define QTAWS_SFNREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "sfnrequest.h"

namespace QtAws {
namespace Sfn {

class SfnRequest;

class SfnRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SfnRequest::Action action; ///< Sfn action to be performed.
    QString apiVersion;        ///< Sfn API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Sfn request (query string) parameters. @todo?

    SfnRequestPrivate(const SfnRequest::Action action, SfnRequest * const q);
    SfnRequestPrivate(const SfnRequestPrivate &other, SfnRequest * const q);

    static QString toString(const SfnRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SfnRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
