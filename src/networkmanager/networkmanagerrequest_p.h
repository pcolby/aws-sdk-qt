// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NETWORKMANAGERREQUEST_P_H
#define QTAWS_NETWORKMANAGERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class NetworkManagerRequest;

class NetworkManagerRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    NetworkManagerRequest::Action action; ///< NetworkManager action to be performed.
    QString apiVersion;        ///< NetworkManager API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< NetworkManager request (query string) parameters. @todo?

    NetworkManagerRequestPrivate(const NetworkManagerRequest::Action action, NetworkManagerRequest * const q);
    NetworkManagerRequestPrivate(const NetworkManagerRequestPrivate &other, NetworkManagerRequest * const q);

    static QString toString(const NetworkManagerRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(NetworkManagerRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
