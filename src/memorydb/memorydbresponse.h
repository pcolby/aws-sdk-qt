// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEMORYDBRESPONSE_H
#define QTAWS_MEMORYDBRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmemorydbglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace MemoryDb {

class MemoryDbResponsePrivate;

class QTAWSMEMORYDB_EXPORT MemoryDbResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    MemoryDbResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    MemoryDbResponse(MemoryDbResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MemoryDbResponse)
    Q_DISABLE_COPY(MemoryDbResponse)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
