// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATASYNCRESPONSE_H
#define QTAWS_DATASYNCRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsdatasyncglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace DataSync {

class DataSyncResponsePrivate;

class QTAWSDATASYNC_EXPORT DataSyncResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    DataSyncResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    DataSyncResponse(DataSyncResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DataSyncResponse)
    Q_DISABLE_COPY(DataSyncResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
