// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KEYSPACESREQUEST_P_H
#define QTAWS_KEYSPACESREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "keyspacesrequest.h"

namespace QtAws {
namespace Keyspaces {

class KeyspacesRequest;

class KeyspacesRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    KeyspacesRequest::Action action; ///< Keyspaces action to be performed.
    QString apiVersion;        ///< Keyspaces API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Keyspaces request (query string) parameters. @todo?

    KeyspacesRequestPrivate(const KeyspacesRequest::Action action, KeyspacesRequest * const q);
    KeyspacesRequestPrivate(const KeyspacesRequestPrivate &other, KeyspacesRequest * const q);

    static QString toString(const KeyspacesRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(KeyspacesRequest)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
