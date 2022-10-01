// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLICATIONDISCOVERYRESPONSE_H
#define QTAWS_APPLICATIONDISCOVERYRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsapplicationdiscoveryglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ApplicationDiscovery {

class ApplicationDiscoveryResponsePrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT ApplicationDiscoveryResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ApplicationDiscoveryResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ApplicationDiscoveryResponse(ApplicationDiscoveryResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApplicationDiscoveryResponse)
    Q_DISABLE_COPY(ApplicationDiscoveryResponse)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
