// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DIRECTCONNECTREQUEST_P_H
#define QTAWS_DIRECTCONNECTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DirectConnectRequest;

class DirectConnectRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    DirectConnectRequest::Action action; ///< DirectConnect action to be performed.
    QString apiVersion;        ///< DirectConnect API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< DirectConnect request (query string) parameters. @todo?

    DirectConnectRequestPrivate(const DirectConnectRequest::Action action, DirectConnectRequest * const q);
    DirectConnectRequestPrivate(const DirectConnectRequestPrivate &other, DirectConnectRequest * const q);

    static QString toString(const DirectConnectRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DirectConnectRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
