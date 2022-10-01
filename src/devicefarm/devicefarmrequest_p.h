// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEVICEFARMREQUEST_P_H
#define QTAWS_DEVICEFARMREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeviceFarmRequest;

class DeviceFarmRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    DeviceFarmRequest::Action action; ///< DeviceFarm action to be performed.
    QString apiVersion;        ///< DeviceFarm API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< DeviceFarm request (query string) parameters. @todo?

    DeviceFarmRequestPrivate(const DeviceFarmRequest::Action action, DeviceFarmRequest * const q);
    DeviceFarmRequestPrivate(const DeviceFarmRequestPrivate &other, DeviceFarmRequest * const q);

    static QString toString(const DeviceFarmRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DeviceFarmRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
