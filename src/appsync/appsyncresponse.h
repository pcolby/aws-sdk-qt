// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPSYNCRESPONSE_H
#define QTAWS_APPSYNCRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsappsyncglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace AppSync {

class AppSyncResponsePrivate;

class QTAWSAPPSYNC_EXPORT AppSyncResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    AppSyncResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    AppSyncResponse(AppSyncResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AppSyncResponse)
    Q_DISABLE_COPY(AppSyncResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
