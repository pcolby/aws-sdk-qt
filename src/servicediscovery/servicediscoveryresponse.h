// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVICEDISCOVERYRESPONSE_H
#define QTAWS_SERVICEDISCOVERYRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsservicediscoveryglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ServiceDiscovery {

class ServiceDiscoveryResponsePrivate;

class QTAWSSERVICEDISCOVERY_EXPORT ServiceDiscoveryResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ServiceDiscoveryResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ServiceDiscoveryResponse(ServiceDiscoveryResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ServiceDiscoveryResponse)
    Q_DISABLE_COPY(ServiceDiscoveryResponse)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
