// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SNOWBALLREQUEST_P_H
#define QTAWS_SNOWBALLREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "snowballrequest.h"

namespace QtAws {
namespace Snowball {

class SnowballRequest;

class SnowballRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SnowballRequest::Action action; ///< Snowball action to be performed.
    QString apiVersion;        ///< Snowball API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Snowball request (query string) parameters. @todo?

    SnowballRequestPrivate(const SnowballRequest::Action action, SnowballRequest * const q);
    SnowballRequestPrivate(const SnowballRequestPrivate &other, SnowballRequest * const q);

    static QString toString(const SnowballRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SnowballRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
