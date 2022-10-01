// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTCONTACTLENSREQUEST_P_H
#define QTAWS_CONNECTCONTACTLENSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "connectcontactlensrequest.h"

namespace QtAws {
namespace ConnectContactLens {

class ConnectContactLensRequest;

class ConnectContactLensRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ConnectContactLensRequest::Action action; ///< ConnectContactLens action to be performed.
    QString apiVersion;        ///< ConnectContactLens API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ConnectContactLens request (query string) parameters. @todo?

    ConnectContactLensRequestPrivate(const ConnectContactLensRequest::Action action, ConnectContactLensRequest * const q);
    ConnectContactLensRequestPrivate(const ConnectContactLensRequestPrivate &other, ConnectContactLensRequest * const q);

    static QString toString(const ConnectContactLensRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ConnectContactLensRequest)

};

} // namespace ConnectContactLens
} // namespace QtAws

#endif
