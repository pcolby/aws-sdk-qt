// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPINTEGRATIONSRESPONSE_H
#define QTAWS_APPINTEGRATIONSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsappintegrationsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace AppIntegrations {

class AppIntegrationsResponsePrivate;

class QTAWSAPPINTEGRATIONS_EXPORT AppIntegrationsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    AppIntegrationsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    AppIntegrationsResponse(AppIntegrationsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AppIntegrationsResponse)
    Q_DISABLE_COPY(AppIntegrationsResponse)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
