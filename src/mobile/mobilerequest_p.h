// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MOBILEREQUEST_P_H
#define QTAWS_MOBILEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "mobilerequest.h"

namespace QtAws {
namespace Mobile {

class MobileRequest;

class MobileRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MobileRequest::Action action; ///< Mobile action to be performed.
    QString apiVersion;        ///< Mobile API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Mobile request (query string) parameters. @todo?

    MobileRequestPrivate(const MobileRequest::Action action, MobileRequest * const q);
    MobileRequestPrivate(const MobileRequestPrivate &other, MobileRequest * const q);

    static QString toString(const MobileRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MobileRequest)

};

} // namespace Mobile
} // namespace QtAws

#endif
