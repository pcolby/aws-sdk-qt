// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STORAGEGATEWAYREQUEST_P_H
#define QTAWS_STORAGEGATEWAYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class StorageGatewayRequest;

class StorageGatewayRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    StorageGatewayRequest::Action action; ///< StorageGateway action to be performed.
    QString apiVersion;        ///< StorageGateway API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< StorageGateway request (query string) parameters. @todo?

    StorageGatewayRequestPrivate(const StorageGatewayRequest::Action action, StorageGatewayRequest * const q);
    StorageGatewayRequestPrivate(const StorageGatewayRequestPrivate &other, StorageGatewayRequest * const q);

    static QString toString(const StorageGatewayRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(StorageGatewayRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
