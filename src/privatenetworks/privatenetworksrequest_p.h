// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PRIVATENETWORKSREQUEST_P_H
#define QTAWS_PRIVATENETWORKSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "privatenetworksrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class PrivateNetworksRequest;

class PrivateNetworksRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    PrivateNetworksRequest::Action action; ///< PrivateNetworks action to be performed.
    QString apiVersion;        ///< PrivateNetworks API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< PrivateNetworks request (query string) parameters. @todo?

    PrivateNetworksRequestPrivate(const PrivateNetworksRequest::Action action, PrivateNetworksRequest * const q);
    PrivateNetworksRequestPrivate(const PrivateNetworksRequestPrivate &other, PrivateNetworksRequest * const q);

    static QString toString(const PrivateNetworksRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(PrivateNetworksRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
