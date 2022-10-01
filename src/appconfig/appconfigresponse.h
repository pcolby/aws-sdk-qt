// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPCONFIGRESPONSE_H
#define QTAWS_APPCONFIGRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsappconfigglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace AppConfig {

class AppConfigResponsePrivate;

class QTAWSAPPCONFIG_EXPORT AppConfigResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    AppConfigResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    AppConfigResponse(AppConfigResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AppConfigResponse)
    Q_DISABLE_COPY(AppConfigResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
