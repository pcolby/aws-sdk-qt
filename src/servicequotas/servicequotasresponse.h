// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVICEQUOTASRESPONSE_H
#define QTAWS_SERVICEQUOTASRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsservicequotasglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ServiceQuotas {

class ServiceQuotasResponsePrivate;

class QTAWSSERVICEQUOTAS_EXPORT ServiceQuotasResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ServiceQuotasResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ServiceQuotasResponse(ServiceQuotasResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ServiceQuotasResponse)
    Q_DISABLE_COPY(ServiceQuotasResponse)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
