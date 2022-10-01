// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SNOWDEVICEMANAGEMENTREQUEST_P_H
#define QTAWS_SNOWDEVICEMANAGEMENTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "snowdevicemanagementrequest.h"

namespace QtAws {
namespace SnowDeviceManagement {

class SnowDeviceManagementRequest;

class SnowDeviceManagementRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SnowDeviceManagementRequest::Action action; ///< SnowDeviceManagement action to be performed.
    QString apiVersion;        ///< SnowDeviceManagement API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SnowDeviceManagement request (query string) parameters. @todo?

    SnowDeviceManagementRequestPrivate(const SnowDeviceManagementRequest::Action action, SnowDeviceManagementRequest * const q);
    SnowDeviceManagementRequestPrivate(const SnowDeviceManagementRequestPrivate &other, SnowDeviceManagementRequest * const q);

    static QString toString(const SnowDeviceManagementRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SnowDeviceManagementRequest)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
