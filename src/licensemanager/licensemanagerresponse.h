// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LICENSEMANAGERRESPONSE_H
#define QTAWS_LICENSEMANAGERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawslicensemanagerglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace LicenseManager {

class LicenseManagerResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT LicenseManagerResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    LicenseManagerResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    LicenseManagerResponse(LicenseManagerResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LicenseManagerResponse)
    Q_DISABLE_COPY(LicenseManagerResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
