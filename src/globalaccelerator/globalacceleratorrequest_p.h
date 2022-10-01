// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GLOBALACCELERATORREQUEST_P_H
#define QTAWS_GLOBALACCELERATORREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class GlobalAcceleratorRequest;

class GlobalAcceleratorRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    GlobalAcceleratorRequest::Action action; ///< GlobalAccelerator action to be performed.
    QString apiVersion;        ///< GlobalAccelerator API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< GlobalAccelerator request (query string) parameters. @todo?

    GlobalAcceleratorRequestPrivate(const GlobalAcceleratorRequest::Action action, GlobalAcceleratorRequest * const q);
    GlobalAcceleratorRequestPrivate(const GlobalAcceleratorRequestPrivate &other, GlobalAcceleratorRequest * const q);

    static QString toString(const GlobalAcceleratorRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(GlobalAcceleratorRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
