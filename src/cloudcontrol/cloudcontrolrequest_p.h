// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDCONTROLREQUEST_P_H
#define QTAWS_CLOUDCONTROLREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "cloudcontrolrequest.h"

namespace QtAws {
namespace CloudControl {

class CloudControlRequest;

class CloudControlRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CloudControlRequest::Action action; ///< CloudControl action to be performed.
    QString apiVersion;        ///< CloudControl API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudControl request (query string) parameters. @todo?

    CloudControlRequestPrivate(const CloudControlRequest::Action action, CloudControlRequest * const q);
    CloudControlRequestPrivate(const CloudControlRequestPrivate &other, CloudControlRequest * const q);

    static QString toString(const CloudControlRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudControlRequest)

};

} // namespace CloudControl
} // namespace QtAws

#endif
